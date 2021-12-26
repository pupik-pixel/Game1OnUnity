using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enumerator : MonoBehaviour
{
	public GameObject MainCamera;
	public GameObject Li;
	public Material myMaterial;
	Animator an;
	public Sprite mySprite;
	public GameObject canvas;


	void OnTriggerStay2D(Collider2D other)
	{

		if (other.tag == "Hero")
		{
			if (gameObject.name == "trigger")
			{
 MainCamera.gameObject.transform.position = new Vector3(1.7f, -8.35f, -20.8f); 
			}

			if (gameObject.name == "trigger x")
			{

 MainCamera.gameObject.transform.position = new Vector3(-6.6f, 18.04f, -32f); 
			}

			if (gameObject.name == "trigger 0")
			{
 MainCamera.gameObject.transform.position = new Vector3(-24.04f, -4.49f, -20.8f); 
			}

			if (gameObject.name == "trigger 1")
			{

			 MainCamera.gameObject.transform.position = new Vector3(-15.5f, 28.8f, -35.8f); 
			}

			if (gameObject.name == "trigger 2")
			{
			
				 MainCamera.gameObject.transform.position = new Vector3(-15.3f, 60.1f, -45f); 
				}
			
			if (gameObject.name == "trigger 3")
			{
		
				MainCamera.gameObject.transform.position = new Vector3(31.29f, 49.2f, -26.4f); 
			}

			if (gameObject.name == "trigger 4")
			{
			
				MainCamera.gameObject.transform.position = new Vector3(37.3f, 8.4f, -45.09f); 
			}

			if (gameObject.name == "trigger 5")
			{
			
				MainCamera.gameObject.transform.position = new Vector3(73.8f, 61.7f, -45.73f); 
			}

			if (gameObject.name == "trigger 6")
			{
			
				MainCamera.gameObject.transform.position = new Vector3(73.8f, 8.9f, -45.3f); 
			}

			if (gameObject.name == "trigger 7")
			{
			
				MainCamera.gameObject.transform.position = new Vector3(114.35f, -0.7f, -29.3f);
			}

			if (gameObject.name == "trigger 8")
			{
			
				MainCamera.gameObject.transform.position = new Vector3(114.35f, 31.6f, -29.3f); 
			}

			if (gameObject.name == "trigger 9")
			{
				
				MainCamera.gameObject.transform.position = new Vector3(106.9f, 75.1f, -27.5f); 
			}

			if (gameObject.name == "chair")
			{
				other.gameObject.SetActive(false);
				gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
				other.gameObject.GetComponent<SpriteRenderer>().material = myMaterial;
				Li.SetActive(true);
				canvas.SetActive(true);
			}
		}
	}


}
