using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Purchasing;

public class PurchaseSource : MonoBehaviour
{

    public void OnPurchaseComplete(Product product)
    {

        if (product.definition.id == "ID_coins_400")
        {
            Menu.coins += 400;
        }
        else
        if (product.definition.id == "ID_coins_1000")
        {
            Menu.coins += 1000;
        }
        else
        if (product.definition.id == "ID_coins_1600")
        {
            Menu.coins += 1600;
        }
        else
        if (product.definition.id == "ID_coins_2500")
        {
            Menu.coins += 2500;
        }
        
        Menu.coins.SaveIntResources();

    }

    public void OnPurchaseFailure(Product product, PurchaseFailureReason reason)
    {
        Debug.Log("Purchase of product " + product.definition.id + " failed because " + reason);
    }
}

