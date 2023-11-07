using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlBlock : MonoBehaviour
{
    public Vector3 rotationPoint;
    private float previousTime;
    public float fallTime = 0.8f;
//управление
    void Update()
    {
        //влево
        if (Input.GetKeyDown(KeyCode.LeftArrow) || ID_Control.id_control==-1)
        {
            ID_Control.id_control = 0;

            transform.position += new Vector3(-1, 0, 0);
            if (!ValidMove())
                transform.position -= new Vector3(-1, 0, 0);
        }
        else //вправо
            if(Input.GetKeyDown(KeyCode.RightArrow) || ID_Control.id_control == 1)
        {
            ID_Control.id_control = 0;
            transform.position += new Vector3(1, 0, 0);
            if (!ValidMove())
                transform.position -= new Vector3(1, 0, 0);
        }
        else //вращение
        if (Input.GetKeyDown(KeyCode.UpArrow) || ID_Control.id_control == 2)
        {
            ID_Control.id_control = 0;

            transform.RotateAround(transform.TransformPoint(rotationPoint), new Vector3(0, 0, 1), 90);
            if (!ValidMove())
            {
                transform.RotateAround(transform.TransformPoint(rotationPoint), new Vector3(0, 0, 1), -90);
            }
        }
        else//быстро вниз
        if (Input.GetKeyUp(KeyCode.Space) || ID_Control.id_control == 4)
        {
            ID_Control.id_control = 0;
            while (ValidMove())
            {
                transform.position += new Vector3(0, -1, 0);
            }
            if (!ValidMove())
            {
                transform.position += new Vector3(0, 1, 0);
            }
        }//быстрее в 15 раз если нажата кнопка
        if (Time.time - previousTime > ((Input.GetKey(KeyCode.DownArrow) || ID_Control.id_control == 3 )? fallTime / 15 : fallTime))
        {
            transform.position += new Vector3(0, -1, 0);
            if (!ValidMove())
            {
                transform.position -= new Vector3(0, -1, 0);
                AddToGrid();
                CheckForLines();
                this.enabled = false;
                tag = "Untagged";
                FindObjectOfType<SpawnBlock>().SpawnNextBlock();

            }
            previousTime = Time.time;
        }
    }
    private void CheckForLines()
    {
        FindObjectOfType<SpawnBlock>().CheckForLines();
    }
    private void AddToGrid()
    {
        FindObjectOfType<SpawnBlock>().AddToGrid(this);
    }
    private bool ValidMove()
    {
        return FindObjectOfType<SpawnBlock>().ValidMove(this);
    }
}
