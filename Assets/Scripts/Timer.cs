using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    public float time_minuts;
    public Text text_time;
    public Button btn_pause, btn_x2,btn_destroyline,btn_destroyAllline;
    public Slider sliderPause, sliderX2;
    public static ITimer timerGame, pauseTimer, x2Timer;
    private int k;

    // Start is called before the first frame update
    void Start()
    {
        
        if(PlayerPrefs.HasKey("level"))
        {
            k = PlayerPrefs.GetInt("level");
            //PlayerPrefs.DeleteKey("level");
        }
        else
            k = 0;

    //время за которое нужно набрать очки
        if(PlayerPrefs.HasKey("time")){
            time_minuts = PlayerPrefs.GetFloat("time");
            //PlayerPrefs.DeleteKey("time");
        }
        else
            time_minuts = FindObjectOfType<Level>().levels[k].minut * 60;
    //таймер активен
        timerGame = new ITimer(time_minuts, true);
    //таймер остановки таймена, не активен
        pauseTimer = new ITimer(0, false);
    //таймер x2, не активен
        x2Timer = new ITimer(0, false);
    }

    // Update is called once per frame
    void Update()
    {
        x2Timer.UpdateTime();
        pauseTimer.UpdateTime();

        sliderX2.value = x2Timer.Times;
        sliderPause.value = pauseTimer.Times;
        //если время менбше нуля
        if (x2Timer.Times <= 0)
        {
            //если количество ресурса > 0, то активируем кнопку
            if(ActiveControlResources.x2.Resources > 0){
                btn_x2.interactable = true;
            }
            ScoresManager.mult_x2 = 1;
            x2Timer.pauseTimer();
        
        }
        //аналогично
        if (pauseTimer.Times <= 0)
        {
            if(ActiveControlResources.pauseTimer.Resources > 0){
                btn_pause.interactable = true;
            }
            timerGame.startTimer();
            pauseTimer.pauseTimer();
        
        }

        timerGame.UpdateTime();
        //отображаем в виде текста
        if (timerGame.Times >= 0)
        {
            text_time.text = timerGame.getMinuts().ToString("00") + ":" + timerGame.getSecunds().ToString("00") + ":" + timerGame.getMillisecunds().ToString("00");
        }
        else
            text_time.text = 0.ToString("00") + ":" + 0.ToString("00") + ":" + 0.ToString("00");
    }
}

public class ITimer: MonoBehaviour
{
    private float minuts;
    private bool stateTimer = true;
    public ITimer(){
    }

    public ITimer(float minuts,bool state){
        this.minuts = minuts;
        this.stateTimer = state;
    }
    
    public float getMillisecunds(){
        return (int)((minuts - (int)minuts) * 100);
    }

    public float getSecunds(){
        return (int)minuts % 60;
    }

    public float getMinuts(){
        return (int)minuts / 60;
    }

    public float Times{
        get => minuts;
        set => minuts = value;
    }

    public void UpdateTime(){
        if(stateTimer)
        {
            this.minuts -= Time.deltaTime;
        }
    }

    public void  pauseTimer(){
        stateTimer = false;
    }

    public void  startTimer(){
        stateTimer = true;
    }
}