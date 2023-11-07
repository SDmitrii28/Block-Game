using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    public Button[] btn_level;
    public Text Star_text;
    public Text Coins_text;
    public Text Buy_Coins_text;
    public Text Shop_Coins_text;
    public Text pauseTimerText, x2Text, destroyLineText, destroyAllLineText;

    private int[] count_star;
    private int sum_star = 0, sum_maxScore = 0, sum_Score = 0;

    private Animator anim1,anim2,anim3,anim4, anim5,anim6;
    public GameObject panel_shop;
    public GameObject panel_coins;
    public GameObject panel_setting;
    public GameObject panel_levels;
    public GameObject panel_record;
    public GameObject panel_gamewin;
    // Translator
    public Text text_nomer_levels, text_time, text_goal, text_goal_achieved, text_btn_play, text_setting, text_sound, text_music, text_btn_review, text_shop, text_coins;
    public Text text_record, text_record_max_star, text_record_max_score, text_record_count_star, text_record_count_score, text_message_gamewin;
    public Text[] text_resources, text_buy_btn_resources, text_buy_btn_coins;
    public static string txt_coins, tx_nomer_levels, tx_time, tx_goal, tx_goal_achieved;

    public Image[] stars_level;
    public Button[] btn_buy;
    public static LoadResources coins, pauseTimer, x2, destroyLine, destroyAllLine, maxScore;

    public AudioSource audBtn, audBuy;
    public int all_levels = 70;
    private ITimer time;
    
    public GameObject scrollVertical;
    private Scrollbar scroll;

    // Start is called before the first frame update
    void Start()
    {
        scroll = scrollVertical.GetComponent<Scrollbar>();
        coins = new LoadResources("coins");
        pauseTimer = new LoadResources("pauseTimer");
        x2 = new LoadResources("x2");
        destroyLine = new LoadResources("destroyLine");
        destroyAllLine = new LoadResources("destroyAllLine");

        if(PlayerPrefs.HasKey("scroll")){
            scroll.value = PlayerPrefs.GetFloat("scroll");
        }
       // txt_coins = "Ваш баланс: ";
        //tx_nomer_levels = "Уровень ";
       // tx_goal = "Набрать: ";
        //tx_goal_achieved = "Набрано: ";
        //анимация панели
        anim1 = panel_shop.transform.GetChild(0).GetComponent<Animator>();
        anim2 = panel_coins.transform.GetChild(0).GetComponent<Animator>();
        anim3 = panel_setting.transform.GetChild(0).GetComponent<Animator>();
        anim4 = panel_levels.transform.GetChild(0).GetComponent<Animator>();
        anim5 = panel_record.transform.GetChild(0).GetComponent<Animator>();
        anim6 = panel_gamewin.transform.GetChild(0).GetComponent<Animator>();
        Time.timeScale = 1f;
        //проверяем прошли последний уровень или нет, если да, то показываем сообщение
        if(PlayerPrefs.HasKey("gamewinlevel")){
            if(PlayerPrefs.GetInt("gamewinlevel") == all_levels - 1){
                ClickActive(5);
                PlayerPrefs.DeleteKey("gamewinlevel");
            }
        }
        //массив в котором хранится количество звезд полученные на каждом уровне
        count_star = new int[all_levels];
        level();

        //отображение в интерфейсе
        Star_text.text = CountStar().ToString();
        //отображаем в панеле интерфейса количество набранный звезд и общее количество набранных очков
        text_record_count_star.text = CountStar().ToString() + "/" + (all_levels * 3).ToString();
        text_record_count_score.text = CountScore().ToString() + "/" + CountMaxScore().ToString();
    }

    
    // Update is called once per frame
    void Update()
    {
        //активируем кнопки
        CheckCoinsBuyResources();
        //отображаем в интерфейсе
        Coins_text.text = coins.Resources.ToString();
        pauseTimerText.text = pauseTimer.Resources.ToString();
        x2Text.text = x2.Resources.ToString();
        destroyLineText.text = destroyLine.Resources.ToString();
        destroyAllLineText.text = destroyAllLine.Resources.ToString();

        Buy_Coins_text.text = txt_coins + Coins_text.text;
        Shop_Coins_text.text = Coins_text.text;
    }
    //закрываем панель, т е делаем не видимой
    public void ClickClose(int k)
    {
        switch (k)
        {
            case 0:
                panel_shop.SetActive(false);
                break;
            case 1:
                panel_coins.SetActive(false);
                break;
            case 2:
                panel_setting.SetActive(false);
                break;
            case 3:
                panel_levels.SetActive(false);
                break;
            case 4:
                panel_record.SetActive(false);
                break;
            case 5:
                panel_gamewin.SetActive(false);
                break;
            default:
                break;
        }
    }
    //активируем панель, т е делаем видимой и запускаем scroll(анимацию)
    public void ClickActive(int k)
    {
        audBtn.Play();
        switch (k)
        {
            case 0:
                panel_shop.SetActive(true);
                anim1.SetTrigger("Scroll_active");
                break;
            case 1:
                panel_coins.SetActive(true);
                anim2.SetTrigger("Scroll_active");
                break;
            case 2:
                panel_setting.SetActive(true);
                anim3.SetTrigger("Scroll_active");
                break;
            case 3:
                panel_levels.SetActive(true);
                anim4.SetTrigger("Scroll_active");
                break;
            case 4:
                panel_record.SetActive(true);
                anim5.SetTrigger("Scroll_active");
                break;
            case 5:
                panel_gamewin.SetActive(true);
                anim6.SetTrigger("Scroll_active");
                break;  
            default:
                break;
        }
    }

    //scroll закрытия панели
        public void ScrollClose(int k)
    {
        audBtn.Play();
        switch (k)
        {
            case 0:
                anim1.SetTrigger("Scroll_close");
                break;
            case 1:
                anim2.SetTrigger("Scroll_close");
                break;
            case 2:
                anim3.SetTrigger("Scroll_close");
                break;
            case 3:
                anim4.SetTrigger("Scroll_close");
                break;
            case 4:
                anim5.SetTrigger("Scroll_close");
                break;
            case 5:
                anim6.SetTrigger("Scroll_close");
                break;
            default:
                break;
        }

    }
//проверяем достаточно ли монет для покупки какого нибудь ресурса, если достаточно, то активируем кнопку иначе делаем кнопку не активной
    private void ActiveBtn(int coin,int nomer_btn){
        if(coins.Resources >= coin){
            btn_buy[nomer_btn].interactable=true;
        }
        else
            btn_buy[nomer_btn].interactable=false;
    }

    private void CheckCoinsBuyResources(){
        ActiveBtn(50,0);
        ActiveBtn(100,1);
        ActiveBtn(25,2);
        ActiveBtn(200,3);
    }
//покупка ресурсов
    public void ClickActiveBuyResources(int k)
    {
        audBuy.Play();
        switch (k)
        {
            case 0:
                {
                    coins-=50;
                    pauseTimer++;
                }
                break;
            case 1:
                {
                    coins-=100;
                    x2++;
                }
                break;
            case 2:
                {
                    coins-=25;
                    destroyLine++;
                }
                break;
            case 3:
                {
                    coins-=200;
                    destroyAllLine++;
                }
                break;
            default:
                break;
        }
        
    coins.SaveIntResources();
    pauseTimer.SaveIntResources();
    x2.SaveIntResources();
    destroyLine.SaveIntResources();
    destroyAllLine.SaveIntResources();
    }
//покупка монет
    public void ClickActiveBuyCoins(int k)
    {
        audBtn.Play();
        switch (k)
        {
            case 0:
                {
                    //coins += 400;
                }
                break;
            case 1:
                {
                    //coins+=1000;
                }
                break;
            case 2:
                {
                    //coins+=1600;
                }
                break;
            case 3:
                {
                    //coins+=2500;
                }
                break;
            default:
                break;
        }
        coins.SaveIntResources();
    }

//подсчет звезд
    public int CountStar()
    {
        sum_star = 0;
        for (int i = 0; i < all_levels; i++)
        {
            sum_star += count_star[i];
        }
        return sum_star;
    }

//подсчет набранный очков
    private int CountScore(){
        for(int i = 0; i < all_levels; i++)
        {
            if(PlayerPrefs.HasKey("max_score_level" + i)){
                sum_Score += PlayerPrefs.GetInt("max_score_level" + i);
            }   
        }
        return sum_Score;

    }

//подсчет очков по уровням 
    private int CountMaxScore(){
        for(int i = 0; i < all_levels; i++)
        {
            sum_maxScore += FindObjectOfType<Level>().levels[i].goal_score;
        }
        return sum_maxScore;

    }
    
    //ативируем количество набранный звезд ( максимум три звезды на каждом уровне)
    public void level()
    {
        Sprite gh = Resources.Load("Star", typeof(Sprite)) as Sprite;
        for (int i = 0; i < all_levels; i++)
        {
            if (PlayerPrefs.HasKey("star" + i))
            {
                //активируем объект со звездами
                btn_level[i].transform.GetChild(1).gameObject.SetActive(true);
                if(i < all_levels - 1)
                {
                    //если уровень прошли, то активируем следующий, то есть, делаем кнопку активной и убираем sprite замка
                    btn_level[i+1].transform.GetChild(2).gameObject.SetActive(false);
                    btn_level[i+1].interactable=true;
                }
                if (PlayerPrefs.GetInt("star" + i) == 1)
                {
                    count_star[i] = 1;
                    btn_level[i].transform.GetChild(1).transform.GetChild(0).GetComponent<Image>().sprite = gh;
                }
                else
                    if (PlayerPrefs.GetInt("star" + i) == 2)
                {
                    count_star[i] = 2;
                    btn_level[i].transform.GetChild(1).transform.GetChild(0).GetComponent<Image>().sprite = gh;
                    btn_level[i].transform.GetChild(1).transform.GetChild(1).GetComponent<Image>().sprite = gh;
                }
                else
                    if (PlayerPrefs.GetInt("star" + i) == 3)
                {
                    count_star[i] = 3;
                    btn_level[i].transform.GetChild(1).transform.GetChild(0).GetComponent<Image>().sprite = gh;
                    btn_level[i].transform.GetChild(1).transform.GetChild(1).GetComponent<Image>().sprite = gh;
                    btn_level[i].transform.GetChild(1).transform.GetChild(2).GetComponent<Image>().sprite = gh;
                }

            }
        }
    }

    private void ChangeTextPanelLevel(int k)
    {
        //уровень + номер
        text_nomer_levels.text = tx_nomer_levels + (k + 1);

        //счет который надо набрать
        text_goal.text = tx_goal + FindObjectOfType<Level>().levels[k].goal_score;

        //время за которое надо набрать очки
        time = new ITimer(FindObjectOfType<Level>().levels[k].minut * 60, true);

        text_time.text = tx_time +  time.getMinuts().ToString("00") + ":" + time.getSecunds().ToString("00");
        //максимальный набранный счет 
        maxScore = new LoadResources("max_score_level" + k.ToString());
        maxScore.SaveIntResources();
        //отображаем
        text_goal_achieved.text = tx_goal_achieved + maxScore.Resources;
    }
    //очиста звезд, при клике на уровень, нужен, так как у нас одна панель, для всех уровней, и поэтому нужна очиста, чт бы не хранились в памяти
    private void clearStars(){
        Sprite gh = Resources.Load("Star_ghost", typeof(Sprite)) as Sprite;
        for(int i = 0; i < 3; i++)
        {
            stars_level[i].sprite = gh;
        }
    }
    // клик на уровень
    public void PlayLevel(int k)
    {
        audBtn.Play();
        //перемещаем scroll по прохождению уровней
        if(k%10 == 0){
            PlayerPrefs.SetFloat("scroll", (float)0.166*(k/10));
            PlayerPrefs.Save();
        }
        clearStars();
        Sprite gh = Resources.Load("Star", typeof(Sprite)) as Sprite;
        //сообщения с заданием, за какое время надо пройти и с максимальным набранный счетом
        ChangeTextPanelLevel(k);
        //сохраняем минуты и счет который надо набрать, нужно для того, что бы эти результаты отображались в игровой сцене
        PlayerPrefs.SetFloat("time", FindObjectOfType<Level>().levels[k].minut * 60);
        PlayerPrefs.SetInt("score", FindObjectOfType<Level>().levels[k].goal_score);
        PlayerPrefs.Save();

        PlayerPrefs.SetInt("level", k);
        PlayerPrefs.Save();

        coins.SaveIntResources();
        //отображаем количество набранный звезд
        for(int i=0;i<PlayerPrefs.GetInt("star"+ k);i++)
        {
            stars_level[i].sprite=gh;
        }
    }
    //загрузка игровой сцены
    public void LoadGameScene(){
        SceneManager.LoadScene(1);
    }

    public void GiveFeedback(){
        audBtn.Play();
    }
}

public class LoadResources
{
    private int resources { get; set; }
    private string key;
    public LoadResources(){

    }
    public LoadResources(string key){
        this.key=key;
        if(PlayerPrefs.HasKey(this.key)){
            this.resources=PlayerPrefs.GetInt(this.key);
        }
        else
            this.resources = 0;
    }

    public void SaveIntResources(){
        PlayerPrefs.SetInt(this.key, this.resources);
        PlayerPrefs.Save();
    }

    public static LoadResources operator++(LoadResources x){
        LoadResources res = new LoadResources();
        x.resources++;
        return x;
    }
    public static LoadResources operator--(LoadResources x){
        LoadResources res = new LoadResources();
        x.resources--;
        return x;
    }
    public static LoadResources operator+(LoadResources x, int k){  
        LoadResources res = new LoadResources();
        x.resources+=k;
        return x;
    }
    public static LoadResources operator-(LoadResources x, int k){
        LoadResources res = new LoadResources();
        x.resources-=k;
        return x;
    }
    public int Resources
    {
        get { return resources; }
        set { resources = value; }
    }
}
