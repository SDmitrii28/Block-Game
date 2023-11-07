using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ID_Control : MonoBehaviour
{
    public static int id_control;
    public AudioSource audRotate, audDownFast;
    // Start is called before the first frame update
    //запоминаем id при нажатии на кнопку управления блоком
    void Start()
    {
        id_control = 0;
    }

    // Update is called once per frame
    public void ClickLeft()
    {
        id_control = -1;
    }

    public void ClickRight()
    {
        id_control = 1;
    }

    public void ClickRotate()
    {
        audRotate.Play();
        id_control = 2;
    }

    public void ClickUp()
    {
        id_control = 0;
    }

    public void ClickDown()
    {
        id_control = 3;
    }
    
    public void ClickDownFast()
    {
        audDownFast.Play();
        id_control = 4;
    }
}
