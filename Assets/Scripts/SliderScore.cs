using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
public class SliderScore : MonoBehaviour
{
    public Slider sl;
    public Image[] stars;
    private int k;
    private Sprite gh;
    // Start is called before the first frame update
    void Start()
    {
        gh = Resources.Load("Star", typeof(Sprite)) as Sprite;

        sl.maxValue = GameRound.goal_score_level;
    }

    // Update is called once per frame
    void Update()
    {
        // отображение набранный звезд на игровой сцене
        sl.value = ScoresManager.countScore.Resources;
        
        if (FindObjectOfType<GameRound>().CheckScoreMore(1) && FindObjectOfType<GameRound>().CheckScoreLess(2))
        {
            
            stars[0].sprite = gh;
        }
        else
        if (FindObjectOfType<GameRound>().CheckScoreMore(2) && FindObjectOfType<GameRound>().CheckScoreLess(3))
        {
			stars[0].sprite = gh;
			stars[1].sprite = gh;
        }
        else
        if (FindObjectOfType<GameRound>().CheckScoreMore(3))
        {
			stars[0].sprite = gh;
			stars[1].sprite = gh;
			stars[2].sprite = gh;
        }
    }
}
