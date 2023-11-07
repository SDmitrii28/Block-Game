using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameRound : MonoBehaviour
{
    private int k;
    public GameObject panel_win;
    public GameObject panel_gameover;

    // Translator

    public Text number_level_win;
    public Text number_level_gameover;
    public Text text_score_win;
    public Text text_score_gameover;

    public Text text_gameover_message, text_gameover_restart, text_gameover_resume, text_gamewin_resume;

    public Text text_scores, text_line, text_goal_achieved;

    public Text text_pause, text_pause_resume, text_pause_restart, text_pause_out;

    public Text text_level;

    public Image[] star;
    private string n_level, text_score;
    public static int goal_score_level;

    private LoadResources maxScore;
    private TranslatorGame translatorGame;

    // Start is called before the first frame update
    void Start()
    {
        translatorGame = new TranslatorGame();
        
        if(PlayerPrefs.HasKey("level"))
        {
            k = PlayerPrefs.GetInt("level");
            //PlayerPrefs.DeleteKey("level");
        }
        else
            k = 0;

        maxScore = new LoadResources("max_score_level" + k);

        //сколько нужно набрать очков
        if(PlayerPrefs.HasKey("score"))
        {
            goal_score_level = PlayerPrefs.GetInt("score");
            //PlayerPrefs.DeleteKey("score");
        }
        else
            goal_score_level =  FindObjectOfType<Level>().levels[k].goal_score;

        FindObjectOfType<ScoresManager>().text_goal_score.text = goal_score_level.ToString();

        n_level = number_level_win.text + " ";
        text_score = text_score_win.text + " ";
        number_level_gameover.text = number_level_win.text;
        text_level.text = n_level + " " + (k + 1);
    }
    //ВЫХОД В МЕНЮ
    public void InMenu()
    {
        FindObjectOfType<Pause>().Outs();
    }
//проверяем сколько набрали очков 1/3, 2/3, 3/3, нужно для активации звезд
    virtual public bool CheckScoreMore(int x)
    {
        return ScoresManager.countScore.Resources >= goal_score_level*x/3;
    }

    virtual public bool CheckScoreLess(int x)
    {
        return ScoresManager.countScore.Resources < goal_score_level*x/3;
    }
    //отображение звезд
    private void ViewStar() 
    {
		Sprite gh = Resources.Load("Star", typeof(Sprite)) as Sprite;

        if (CheckScoreMore(1) && CheckScoreLess(2))
        {
            
            star[0].sprite = gh;
        }
        else
        if (CheckScoreMore(2) && CheckScoreLess(3))
        {
			star[0].sprite = gh;
			star[1].sprite = gh;
        }
        else
        if (CheckScoreMore(3))
        {
			star[0].sprite = gh;
			star[1].sprite = gh;
			star[2].sprite = gh;
        }
    }

//метод выигрыша
    public void GameWin()
    {
        Time.timeScale = 0f;
        ViewStar();
        //сохраняем количество набранный звезд
        if (CheckScoreMore(1) && CheckScoreLess(2) && !PlayerPrefs.HasKey("star"+k.ToString()))
        {
            PlayerPrefs.SetInt("star" + k.ToString(), 1);
        }
        else
        if (CheckScoreMore(2) && CheckScoreLess(3) && (!PlayerPrefs.HasKey("star" + k.ToString())|| PlayerPrefs.GetInt("star"+k.ToString())<2))
        {
            PlayerPrefs.SetInt("star" + k.ToString(), 2);
        }
        else
        if (CheckScoreMore(3) && (!PlayerPrefs.HasKey("star" + k.ToString()) || PlayerPrefs.GetInt("star" + k.ToString()) < 3))
        {
            PlayerPrefs.SetInt("star" + k.ToString(), 3);
        }
        //сохраняем русурсы
        ScoresManager.countCoins.SaveIntResources();

        ActiveControlResources.pauseTimer.SaveIntResources();
        ActiveControlResources.x2.SaveIntResources();
        ActiveControlResources.destroyLine.SaveIntResources();
        ActiveControlResources.destroyAllLine.SaveIntResources();
        //сохраняем номер уровня
        PlayerPrefs.SetInt("gamewinlevel", k);
        PlayerPrefs.Save();
//сообщение с выигрышем
        ChangedTextWin();
        //сохраняем максимальны результат
        SaveMaxScore(ScoresManager.countScore.Resources, k);
        Time.timeScale = 0f;
        panel_win.SetActive(true);
        PlayerPrefs.Save();
    }

    private void SaveIntResult(string keys,int value){
        PlayerPrefs.SetInt(keys, value);
        PlayerPrefs.Save();
    }

    private void SaveMaxScore(int value,int level){
        if(maxScore.Resources < ScoresManager.countScore.Resources)
        {
            SaveIntResult("max_score_level" + level, value);
        }
    }

    private void ChangedTextWin(){
        number_level_win.text = n_level + (k + 1).ToString();
        text_score_win.text = text_score + ScoresManager.countScore.Resources;
    }

    private void ChangedTextGameOver(){
        number_level_gameover.text = n_level + (k + 1).ToString();
        text_score_gameover.text = text_score + ScoresManager.countScore.Resources;
    }

    public void GameOver()
    {
        Time.timeScale = 0f;
    //если количество очков меньше чем 1/3 то проигрыш иначе выигрыш
        if(ScoresManager.countScore.Resources < goal_score_level/3)
        {
            ScoresManager.countCoins.SaveIntResources();

            ActiveControlResources.pauseTimer.SaveIntResources();
            ActiveControlResources.x2.SaveIntResources();
            ActiveControlResources.destroyLine.SaveIntResources();
            ActiveControlResources.destroyAllLine.SaveIntResources();

            SaveMaxScore(ScoresManager.countScore.Resources, k);
            //выводим сообщение
            ChangedTextGameOver();
            panel_gameover.SetActive(true);
        }
        else
            GameWin();
    }
}
