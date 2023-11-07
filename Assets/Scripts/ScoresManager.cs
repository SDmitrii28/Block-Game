using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoresManager : MonoBehaviour
{
    public Text text_score, text_line, text_goal_score, text_coins;
    public static int mult_x2 = 1;
    public static LoadResources countCoins, countLine, countScore, countClearLine;
    // Start is called before the first frame update
    void Start()
    {
        countCoins = new LoadResources("coins");
        countLine = new LoadResources("line");
        countScore = new LoadResources("score");
        countClearLine = new LoadResources("clearLine");

        countLine.Resources = 0;
        countScore.Resources = 0;
        //количество очищенный линий за один раз
        countClearLine.Resources = 0;
        
    }

    // Update is called once per frame
    void Update()
    {
        text_score.text = countScore.Resources.ToString();
        text_line.text = countLine.Resources.ToString();
        text_coins.text = countCoins.Resources.ToString();

    //проверяем сколько линий очистили за один раз
        if (countClearLine.Resources > 0)
        {
            if (countClearLine.Resources == 1)
            {
                ClearOneLine();
            }
            else 
            if (countClearLine.Resources == 2)
            {
                ClearTwoLine();
            }
            else 
            if (countClearLine.Resources == 3)
            {
                ClearThreeLine();
            }
            else 
            if (countClearLine.Resources == 4)
            {
                ClearFourLine();
            }
            countClearLine.Resources = 0;
        }
//выигрыш, если набрали нужное количество очков, проигрыш, если не уложились во время
        if (countScore.Resources >= GameRound.goal_score_level)
        {
            FindObjectOfType<GameRound>().GameWin();
        }
        if(Timer.timerGame.Times <= 0){
            FindObjectOfType<GameRound>().GameOver();
        }
    }

    public void ClearOneLine()
    {
        countScore+=(100*mult_x2);
        countLine++;
        countCoins++;
    }

    public void ClearTwoLine()
    {
        countScore+=(300*mult_x2);
        countLine+=2;
        countCoins+=2;
    }

    public void ClearThreeLine()
    {
        countScore+=(700*mult_x2);
        countLine+=3;
        countCoins+=3;
    }
    
    public void ClearFourLine()
    {
        countScore+=(1500*mult_x2);
        countLine+=4;
        countCoins+=4;
    }
}
