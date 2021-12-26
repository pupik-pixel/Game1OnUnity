using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reboot : MonoBehaviour
{
    // Start is called before the first frame update


    // Update is called once per frame
    void Update()
    {
		if (Input.GetKey(KeyCode.Space)) Application.LoadLevel("SampleScene");
		if (Input.GetKey(KeyCode.Escape)) Application.Quit();
	}
}
