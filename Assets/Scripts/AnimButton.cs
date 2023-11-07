using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimButton : MonoBehaviour
{
    // Start is called before the first frame update
    public int k;
// активация нужных методов в том числе и анимаций
    public void ClosePanel()
    {
        FindObjectOfType<Menu>().ClickClose(k);
    }

    public void ActivePanel()
    {
        FindObjectOfType<Menu>().ClickActive(k);
    }

    public void ScrollClose()
    {
        FindObjectOfType<Menu>().ScrollClose(k);
    }

    public void ClickActiveBuyResources()
    {
        FindObjectOfType<Menu>().ClickActiveBuyResources(k);
    }
    
    public void ClickActiveBuyCoins()
    {
        FindObjectOfType<Menu>().ClickActiveBuyCoins(k);
    }
}