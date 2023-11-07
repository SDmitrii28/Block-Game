using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ghost : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        tag = "ghost_block";

        foreach (Transform mino in transform)
        {
            Sprite gh = Resources.Load("Ghost", typeof(Sprite)) as Sprite;
            mino.GetComponent<SpriteRenderer>().sprite= gh;
            mino.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0.7f);
            mino.GetComponent<SpriteRenderer>().sortingLayerName = "Ghost";
        }

    }

    // Update is called once per frame
    void Update()
    {
        FollowActiveTetromino();

        MoveDown();
    }

    void FollowActiveTetromino()
    {
        Transform currentActiveBlockTransform = GameObject.FindGameObjectWithTag("active_block").transform;

        transform.position = currentActiveBlockTransform.position;
        transform.rotation = currentActiveBlockTransform.rotation;
    }

    void MoveDown()
    {
        while (CheckIsValidPosition())
        {
            transform.position += new Vector3(0, -1, 0);
        }

        if (!CheckIsValidPosition())
        {
            transform.position += new Vector3(0, 1, 0);  
        }
    }

    bool CheckIsValidPosition()
    {
        foreach (Transform mino in transform)
        {
            Vector2 pos = FindObjectOfType<SpawnBlock>().Round(mino.position);

            if (FindObjectOfType<SpawnBlock>().CheckInsideGrid(pos) == false)
                return false;

            if (FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos) != null && FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos).parent.tag == "active_block")
                return true;

            if (FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos) != null && FindObjectOfType<SpawnBlock>().GetTransformAtGridPosition(pos).parent != transform)
                return false;
        }

        return true;
    }


}
