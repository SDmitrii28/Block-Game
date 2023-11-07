using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Translator : MonoBehaviour
{
    public GameObject btn_language_rus, btn_language_eng;
    public AudioSource audSetting;
    private TranslatorMenu translatorMenu;
    // Start is called before the first frame update
    void Start()
    {
        translatorMenu = new TranslatorMenu(btn_language_rus, btn_language_eng);
        //translatorMenu.OnTranslatorRussian();
        //translatorMenu.OnTranslatorEnglish();
    }

    public void OnClickTranslateRUS(){
        audSetting.Play();
        translatorMenu.OnTranslatorEnglish();
        PlayerPrefs.SetString("Language","English");
        PlayerPrefs.Save();
    }

    public void OnClickTranslateENG(){
        audSetting.Play();
        translatorMenu.OnTranslatorRussian();
        PlayerPrefs.SetString("Language","Russian");
        PlayerPrefs.Save();
    }

}

interface ITranslator{
    void OnTranslatorRussian();
    void OnTranslatorEnglish();
}

class TranslatorMenu : Menu, ITranslator
{
    private GameObject btn_rus, btn_eng;
    public TranslatorMenu(GameObject btn_rus, GameObject btn_eng){
        this.btn_rus = btn_rus;
        this.btn_eng = btn_eng;
        if(PlayerPrefs.HasKey("Language"))
        {
            if(PlayerPrefs.GetString("Language") == "Russian")
            {
                OnTranslatorRussian();
            }
            else
            if(PlayerPrefs.GetString("Language") == "English")
            {
                OnTranslatorEnglish();
            }
        }
        else
            OnTranslatorRussian();
    }

    public void OnTranslatorRussian(){

        btn_rus.SetActive(true);
        btn_eng.SetActive(false);
        tx_nomer_levels = "Уровень ";
        tx_goal = "Набрать: ";
        tx_goal_achieved = "Набрано: ";
        tx_time = "Время: ";

        Translation(FindObjectOfType<Menu>().text_btn_play, "Играть");

        Translation(FindObjectOfType<Menu>().text_setting, "Настройки");
        Translation(FindObjectOfType<Menu>().text_sound, "Звук");
        Translation(FindObjectOfType<Menu>().text_music, "Музыка");
        Translation(FindObjectOfType<Menu>().text_btn_review, "Оставить отзыв");

        Translation(FindObjectOfType<Menu>().text_shop, "Магазин");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[0], "Купить");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[1], "Купить");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[2], "Купить");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[3], "Купить");

        Translation(FindObjectOfType<Menu>().text_resources[0], "Пауза таймера");
        Translation(FindObjectOfType<Menu>().text_resources[1], "Увеличить получение бонусов в 2 раза");
        Translation(FindObjectOfType<Menu>().text_resources[2], "Уничтожение ряда блоков");
        Translation(FindObjectOfType<Menu>().text_resources[3], "Уничтожение всех блоков");

        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[0], "Купить");
        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[1], "Купить");
        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[2], "Купить");
        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[3], "Купить");
        Translation(FindObjectOfType<Menu>().text_coins, "Монеты");
        
        txt_coins = "Ваш баланс: ";

        Translation(FindObjectOfType<Menu>().text_record, "Рекорд");
        Translation(FindObjectOfType<Menu>().text_record_max_star, "Набрано звезд");
        Translation(FindObjectOfType<Menu>().text_record_max_score, "Набрано очков");

        Translation(FindObjectOfType<Menu>().text_message_gamewin, "Поздравляю вы прошли все уровни!!!");
        
    }

    public void OnTranslatorEnglish(){

        btn_rus.SetActive(false);
        btn_eng.SetActive(true);
        tx_nomer_levels = "Level ";
        tx_goal = "Goal: ";
        tx_goal_achieved = "Your record: ";
        tx_time = "Time: ";

        Translation(FindObjectOfType<Menu>().text_btn_play, "Play");

        Translation(FindObjectOfType<Menu>().text_setting, "Setting");
        Translation(FindObjectOfType<Menu>().text_sound, "Sound");
        Translation(FindObjectOfType<Menu>().text_music, "Music");
        Translation(FindObjectOfType<Menu>().text_btn_review, "Give feedback");

        Translation(FindObjectOfType<Menu>().text_shop, "Shop");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[0], "Buy");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[1], "Buy");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[2], "Buy");
        Translation(FindObjectOfType<Menu>().text_buy_btn_resources[3], "Buy");

        Translation(FindObjectOfType<Menu>().text_resources[0], "Pause timer");
        Translation(FindObjectOfType<Menu>().text_resources[1], "Increase bonuses by 2 times");
        Translation(FindObjectOfType<Menu>().text_resources[2], "Destruction of a number of blocks");
        Translation(FindObjectOfType<Menu>().text_resources[3], "Destruction of all blocks");

        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[0], "Buy");
        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[1], "Buy");
        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[2], "Buy");
        Translation(FindObjectOfType<Menu>().text_buy_btn_coins[3], "Buy");
        Translation(FindObjectOfType<Menu>().text_coins, "Coins");
        
        txt_coins = "Your balance: ";

        Translation(FindObjectOfType<Menu>().text_record, "Record");
        Translation(FindObjectOfType<Menu>().text_record_max_star, "Stars scored");
        Translation(FindObjectOfType<Menu>().text_record_max_score, "Points scored");

        Translation(FindObjectOfType<Menu>().text_message_gamewin, "Congratulations, you have completed all levels!!!");
    }

    private void Translation(Text oldText, string newText){
        oldText.text = newText;
    }
}


class TranslatorGame : GameRound, ITranslator
{
    public TranslatorGame(){
        if(PlayerPrefs.HasKey("Language"))
        {
            if(PlayerPrefs.GetString("Language") == "Russian")
            {
                OnTranslatorRussian();
            }
            else
            if(PlayerPrefs.GetString("Language") == "English")
            {
                OnTranslatorEnglish();
            }
        }
        else
            OnTranslatorRussian();
    }
    
    public void OnTranslatorRussian(){

        Translation(FindObjectOfType<GameRound>().number_level_win, "Уровень");
        Translation(FindObjectOfType<GameRound>().number_level_gameover, "Уровень");

        Translation(FindObjectOfType<GameRound>().text_score_win, "Набрано очков:");
        Translation(FindObjectOfType<GameRound>().text_score_gameover, "Набрано очков:");
        Translation(FindObjectOfType<GameRound>().text_gameover_message, "Вы не набрали нужное количество очков!!!");
        Translation(FindObjectOfType<GameRound>().text_gameover_restart, "Заново");
        Translation(FindObjectOfType<GameRound>().text_gameover_resume, "Продолжить");

        Translation(FindObjectOfType<GameRound>().text_gamewin_resume, "Продолжить");

        Translation(FindObjectOfType<GameRound>().text_scores, "СЧЁТ");
        Translation(FindObjectOfType<GameRound>().text_line, "ЛИНИИ");
        Translation(FindObjectOfType<GameRound>().text_goal_achieved, "НАБРАТЬ ОЧКИ");

        Translation(FindObjectOfType<GameRound>().text_pause, "Пауза");
        Translation(FindObjectOfType<GameRound>().text_pause_resume, "Продолжить");
        Translation(FindObjectOfType<GameRound>().text_pause_restart, "Заново");
        Translation(FindObjectOfType<GameRound>().text_pause_out, "Выход");   
    }

    public void OnTranslatorEnglish(){

        Translation(FindObjectOfType<GameRound>().number_level_win, "Level");
        Translation(FindObjectOfType<GameRound>().number_level_gameover, "Level");

        Translation(FindObjectOfType<GameRound>().text_score_win, "Points scored:");
        Translation(FindObjectOfType<GameRound>().text_score_gameover, "Points scored:");
        Translation(FindObjectOfType<GameRound>().text_gameover_message, "You have not scored the required number of points!!!");
        Translation(FindObjectOfType<GameRound>().text_gameover_restart, "Restart");
        Translation(FindObjectOfType<GameRound>().text_gameover_resume, "Resume");

        Translation(FindObjectOfType<GameRound>().text_gamewin_resume, "Resume");

        Translation(FindObjectOfType<GameRound>().text_scores, "SCORE");
        Translation(FindObjectOfType<GameRound>().text_line, "LINE");
        Translation(FindObjectOfType<GameRound>().text_goal_achieved, "GET POINTS");

        Translation(FindObjectOfType<GameRound>().text_pause, "Pause");
        Translation(FindObjectOfType<GameRound>().text_pause_resume, "Resume");
        Translation(FindObjectOfType<GameRound>().text_pause_restart, "Restart");
        Translation(FindObjectOfType<GameRound>().text_pause_out, "Outs");   
        
    }

    private void Translation(Text oldText, string newText){
        oldText.text = newText;
    }
}