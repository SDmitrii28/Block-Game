using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpawnBlock : MonoBehaviour
{
    public GameObject[] Block;
    private GameObject previewBlock;
    private GameObject nextBlock;
    private GameObject ghostBlock;
    public GameObject spawn_position_next;
    public int maxSwaps = 2;
    public int currentSwaps = 0;
    private bool gameStarted = false;
    public static int height = 20;
    public static int width = 10;
    public static Transform[,] grid = new Transform[width, height];
    public AudioSource audDestroy;
    //монеты, которые можно получить за уничтожений всех линий
    public int coinsPlus = 2500;

    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1f;
        SpawnNextBlock();
    }
//уничтожаем линию
    public void ClickDestroyLine()
    {
        audDestroy.Play();
        int i = 0;
        for (int j = 0; j < width; j++)
        {
            if (grid[j, i] != null)
            {
                Destroy(grid[j, i].gameObject);
                grid[j, i] = null;
            }
        }
        RowDown(i);
        ScoresManager.countCoins++;
        ScoresManager.countLine++;
    }
//уничтожаем все линии
    public void ClickDestroyAllLine()
    {
        audDestroy.Play();
        for (int i = height - 1; i >= 0; i--)
        {
            for (int j = 0; j < width; j++)
            {
                if (grid[j, i] != null)
                {
                    Destroy(grid[j, i].gameObject);
                    grid[j, i] = null;
                }
            }
        RowDown(i);
        ScoresManager.countCoins++;
        ScoresManager.countLine++;
        }
        //прибавляем монеты, которые можно получить за уничтожение всех линий
        ScoresManager.countScore+=coinsPlus;
    }

    public void SpawnNextBlock()
    {
        if (!gameStarted)
        {
            gameStarted = true;
            nextBlock = Instantiate(Block[Random.Range(0, Block.Length)], transform.position, Quaternion.identity);
            previewBlock = Instantiate(Block[Random.Range(0, Block.Length)], spawn_position_next.transform.position, Quaternion.identity);
            previewBlock.GetComponent<ControlBlock>().enabled = false;
            nextBlock.tag = "active_block";
            SpawnGhostBlock();
        }
        else
        {
            previewBlock.transform.localPosition = transform.position;
            nextBlock = previewBlock;
            nextBlock.GetComponent<ControlBlock>().enabled = true;
            nextBlock.tag = "active_block";
            previewBlock = Instantiate(Block[Random.Range(0, Block.Length)], spawn_position_next.transform.position, Quaternion.identity);
            previewBlock.GetComponent<ControlBlock>().enabled = false;
            SpawnGhostBlock();
        }
        currentSwaps = 0;
    }

    public void SpawnGhostBlock()
    {
        if (GameObject.FindGameObjectsWithTag("ghost_block") != null)
            Destroy(GameObject.FindGameObjectWithTag("ghost_block"));
        ghostBlock = Instantiate(nextBlock, nextBlock.transform.position, Quaternion.identity);
        Destroy(ghostBlock.GetComponent<ControlBlock>());
        ghostBlock.AddComponent<Ghost>();
    }

    public bool CheckInsideGrid(Vector2 pos)
    {
        return ((int)pos.x >= 0 && (int)pos.x <= 10 && (int)pos.y >= 0);
    }

    public Vector2 Round(Vector2 pos)
    {
        return new Vector2(Mathf.Round(pos.x), Mathf.Round(pos.y));
    }

    public Transform GetTransformAtGridPosition(Vector2 pos)
    {
        if (pos.y > height - 1)
        {
            return null;
        }
        else
        {
            return grid[(int)pos.x, (int)pos.y];
        }
    }

    public void CheckForLines()
    {
        for (int i = height - 1; i >= 0; i--)
        {
            if (HasLine(i))
            {
                audDestroy.Play();
                DeleteLine(i);
                RowDown(i);
                ScoresManager.countClearLine++;
            }
        }
    }
//проверка заполена строка или нет
    bool HasLine(int i)
    {
        for (int j = 0; j < width; j++)
        {
            if (grid[j, i] == null)
            {
                return false;
            }
        }
        return true;
    }
//уничтожение линии
    void DeleteLine(int i)
    {
        for (int j = 0; j < width; j++)
        {
            Destroy(grid[j, i].gameObject);
            grid[j, i] = null;

        }
    }
//опускание блоков
    void RowDown(int i)
    {
        for (int y = i; y < height; y++)
        {
            for (int j = 0; j < width; j++)
            {
                if (grid[j, y] != null)
                {
                    grid[j, y - 1] = grid[j, y];
                    grid[j, y] = null;
                    grid[j, y - 1].transform.position -= new Vector3(0, 1, 0);
                }
            }
        }
    }
//заполнение
    public void AddToGrid(ControlBlock tetromino)
    {
        foreach (Transform children in tetromino.transform)
        {
            int roundedX = Mathf.RoundToInt(children.transform.position.x);
            int roundedY = Mathf.RoundToInt(children.transform.position.y);
            grid[roundedX, roundedY] = children;
            if (roundedY >= 17)
            {
                FindObjectOfType<GameRound>().GameOver();
            }
        }
    }
    //ограничения
    public bool ValidMove(ControlBlock tetromino)
    {
        foreach (Transform children in tetromino.transform)
        {
            int roundedX = Mathf.RoundToInt(children.transform.position.x);
            int roundedY = Mathf.RoundToInt(children.transform.position.y);
            if (roundedX < 0 || roundedX >= width || roundedY < 0 || roundedY >= height+5)
            {
                return false;
            }
            if (grid[roundedX, roundedY] != null)
            {
                return false;
            }
        }
        return true;
    }
}
