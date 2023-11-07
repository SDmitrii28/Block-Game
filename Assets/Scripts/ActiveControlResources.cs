using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActiveControlResources : MonoBehaviour
{
    public Text pauseTimerText, x2Text, destroyLineText, destroyAllLineText;
    public static LoadResources pauseTimer,x2, destroyLine,destroyAllLine;
    public AudioSource audBtn;
    // Start is called before the first frame update
    void Start()
    {
        pauseTimer = new LoadResources("pauseTimer");
        x2 = new LoadResources("x2");
        destroyLine = new LoadResources("destroyLine");
        destroyAllLine = new LoadResources("destroyAllLine");

        CheckResources(FindObjectOfType<Timer>().btn_pause, pauseTimer);
        CheckResources(FindObjectOfType<Timer>().btn_x2, x2);
    }

    // Update is called once per frame
    void Update()
    {
        pauseTimerText.text = pauseTimer.Resources.ToString();
        x2Text.text = x2.Resources.ToString();
        destroyLineText.text = destroyLine.Resources.ToString();
        destroyAllLineText.text = destroyAllLine.Resources.ToString();
        CheckResources(FindObjectOfType<Timer>().btn_destroyline, destroyLine);
        CheckResources(FindObjectOfType<Timer>().btn_destroyAllline, destroyAllLine);
    }
//активация паузы таймера на 10 секунд
    public void activePauseTimer(){
        audBtn.Play();
        Timer.pauseTimer.Times = 10;
        Timer.timerGame.pauseTimer();
        Timer.pauseTimer.startTimer();
        FindObjectOfType<Timer>().sliderPause.maxValue = Timer.pauseTimer.Times;
        FindObjectOfType<Timer>().btn_pause.interactable = false;
        pauseTimer--;
    }
//активация x2 на 20 секунд
    public void activeX2(){
        audBtn.Play();
        Timer.x2Timer.Times = 20;
        Timer.x2Timer.startTimer();
        ScoresManager.mult_x2 = 2;
        FindObjectOfType<Timer>().sliderX2.maxValue = Timer.x2Timer.Times;
        FindObjectOfType<Timer>().btn_x2.interactable = false;
        x2--;
    }
//активация уничтожения линии
    public void activeDestroyLine(){
        FindObjectOfType<SpawnBlock>().ClickDestroyLine();
        destroyLine--;
    }
//активация уничтожения всех блоков
    public void activeDestroyAllLine(){
        FindObjectOfType<SpawnBlock>().ClickDestroyAllLine();
        destroyAllLine--;
    }
    //проверка что ресурсов не ноль, если ноль, то делаем кнопку не активной
    private void CheckResources(Button btn, LoadResources res){
        if(res.Resources <= 0){
            btn.interactable = false;
        }
        else
            btn.interactable = true;
    }
}
