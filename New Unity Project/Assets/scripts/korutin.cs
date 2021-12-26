using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class korutin : MonoBehaviour
{


    // Update is called once per frame
    void Start()
    {
		StartCoroutine(St());
    }

	IEnumerator St()
	{
		yield return new WaitForSeconds(5f);
		Application.LoadLevel("Menu");
	}
}
