using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tumbler : MonoBehaviour
{
	public Sprite mySprite;
	public Sprite mySprite2;
	public GameObject platform;
	public GameObject platform2;
	public GameObject platform3;
	public GameObject switchOff2;
	public GameObject switchOff4;
	public GameObject switchOff5;
	public GameObject switchOff6;
	public GameObject switchOff7;
	public GameObject S1;
	public GameObject S2;
	public GameObject S3;
	public GameObject S4;
	public GameObject S5;
	public GameObject S6;
	public GameObject S7;
	public GameObject S8;
	public AudioClip X,X1,X2;
	AudioSource S;
	bool[] logic;
	int a;

	void Start()
	{
		S = GetComponent<AudioSource>();
		logic = new bool[8] { false, false, false, false, false, false, false, false };
		
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		
		if (other.tag == "Hero")
		{
			if (gameObject.name == "switchOff")
			{
				if (logic[0] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					platform.gameObject.GetComponent<BoxCollider2D>().enabled = true;
					platform.gameObject.GetComponent<SpriteRenderer>().enabled = true;
					S1.SetActive(true);
					fun1();
					logic[0] = true;
				}

			}
			if (gameObject.name == "switchOff 1")
			{
				if (logic[1] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					switchOff2.SetActive(true);
					S3.SetActive(true);
					fun1();
					logic[1] = true;
				}

			}
			if (gameObject.name == "switchOff 2")
			{
				if (logic[2] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					platform2.SetActive(false);
					S2.SetActive(true);
					fun1();
					logic[2] = true;
				}

			}
			if (gameObject.name == "switchOff 3")
			{
				if (logic[3] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					switchOff4.SetActive(true);
					S4.SetActive(true);
					fun1();
					logic[3] = true;
				}

			}
			if (gameObject.name == "switchOff 4")
			{
				if (logic[4] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					switchOff5.SetActive(true);
					S5.SetActive(true);
					fun1();
					logic[4] = true;
				}

			}
			if (gameObject.name == "switchOff 5")
			{
				if (logic[5] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					switchOff6.SetActive(true);
					S6.SetActive(true);
					fun1();
					logic[5] = true;
				}

			}
			if (gameObject.name == "switchOff 6")
			{
				if (logic[6] == false)
				{
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite;
					switchOff7.SetActive(true);
					S7.SetActive(true);
					fun1();
					logic[6] = true;
				}

			}
			if (gameObject.name == "switchOff 7")
			{
				if (logic[7] == false)
				{
					platform3.SetActive(false);
					gameObject.GetComponent<SpriteRenderer>().sprite = mySprite2;
					S8.SetActive(true);
					fun1();
					logic[7] = true;
				}

			}
		}
	}


	void fun1()
	{
		a = Random.Range(0, 3);
		switch (a)
		{
			case 0: { S.PlayOneShot(X);break; }
			case 1: { S.PlayOneShot(X1); break; }
			case 2: { S.PlayOneShot(X2); break; }
		}
	}
}
