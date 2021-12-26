using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class script : MonoBehaviour
{
	bool down = false;
	public AudioClip X;
	AudioSource Au;
	Animator an;
	int a,b;
	public GameObject p1, p2, p3;

	void Start()
	{
		Au = GetComponent<AudioSource>();
		an = GetComponent<Animator>();
	}

	void OnCollisionEnter2D(Collision2D other)
	{
		a = b = 0;
		Au.PlayOneShot(X);
		bool hor = Input.GetButton("Horizontal");
			if (hor)
			{
				down = false;
				an.Play("go");
			}

			if (down == true)
			{
				down = false;
				an.Play("idle");
			}
					
	}


	// Update is called once per frame
	void Update()
	{
		bool hup, hdown;hdown = Input.GetButtonDown("Horizontal"); hup = Input.GetButtonUp("Horizontal");
		float speed = 20f;
		float h = Input.GetAxis("Horizontal");
		float v = Input.GetAxis("Vertical");
		transform.Translate(new Vector2(h, 0) * speed * Time.deltaTime);

		if (h >= 0.3) transform.localScale = new Vector2(1, 1);
		if (h <= -0.3) transform.localScale = new Vector2(-1, 1);
		if (hdown)
		{
			an.Play("go");
		}

		if (hup)
		{
			if (down == true)
			{
				an.Play("down");
			}
			else
			{
				an.Play("idle");
			}
		}

		if (Input.GetKeyDown(KeyCode.UpArrow))
		{
			a++;
			if (a <= 2)
			{
				an.Play("jump");
				gameObject.GetComponent<Rigidbody2D>().AddForce(transform.up * 43, ForceMode2D.Impulse);
			}
		}

		if (Input.GetKeyDown(KeyCode.W))
		{
			a++;
			if (a <= 2) {
				an.Play("jump");
				gameObject.GetComponent<Rigidbody2D>().AddForce(transform.up * 43, ForceMode2D.Impulse);
			}
		}

		if (Input.GetKeyUp(KeyCode.UpArrow))
		{

			an.Play("down");
			down = true;
		}
		if (Input.GetKeyUp(KeyCode.W))
		{
			an.Play("down");
			down = true;

		}
		if (Input.GetKeyUp(KeyCode.UpArrow) & Input.GetKeyUp(KeyCode.LeftArrow))
		{
			an.Play("down");
			down = true;
		}
		if (Input.GetKeyUp(KeyCode.W) & Input.GetKeyUp(KeyCode.A))
		{
			an.Play("down");
			down = true;
		}
		if (Input.GetKeyUp(KeyCode.UpArrow) & Input.GetKeyUp(KeyCode.RightArrow))
		{
			an.Play("down");
			down = true;
		}
		if (Input.GetKeyUp(KeyCode.W) & Input.GetKeyUp(KeyCode.D))
		{
			an.Play("down");
			down = true;
		}
		if (Input.GetKey(KeyCode.S))
		{
			an.Play("vniz");
			transform.Translate(new Vector2(0, v) * speed * Time.deltaTime);
		}
		if (Input.GetKey(KeyCode.DownArrow))
		{
			an.Play("vniz");
			transform.Translate(new Vector2(0, v) * speed * Time.deltaTime);
		}
		if (Input.GetKeyUp(KeyCode.S))
		{
			an.Play("down");
		}
		if (Input.GetKeyUp(KeyCode.DownArrow))
		{
			an.Play("down");
		}

		if (Input.GetKey(KeyCode.R) & Input.GetKey(KeyCode.F))
		{
			p1.SetActive(false);
			p2.SetActive(false);
			p3.SetActive(true);
			transform.position = new Vector2(108.6f, 70.2f);
		}
	}
}