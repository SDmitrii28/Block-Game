using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Pause : MonoBehaviour
{
    public AudioSource audBtn;

    public void OpenPause()
    {
        audBtn.Play();
        Time.timeScale = 0f;
    }

    public void Resume()
    {
        audBtn.Play();
        Time.timeScale = 1f;
    }

    public void Restart()
    {
        audBtn.Play();
        SceneManager.LoadScene(1);
    }
    
    public void Outs()
    {
        audBtn.Play();
        SceneManager.LoadScene(0);
    }
}
