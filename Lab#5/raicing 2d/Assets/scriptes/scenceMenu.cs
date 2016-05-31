using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class scenceMenu : MonoBehaviour {

    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void Play()
    {
        SceneManager.LoadScene("level1");
    }

    public void Pause()
    {

        if (Time.timeScale == 1)
        {
            Time.timeScale = 0;

        }
        else if (Time.timeScale == 0)
        {
            Time.timeScale = 1;
        }
    }

    public void Menu()
    {
        SceneManager.LoadScene("menuScenes");
    }
    public void Exit()
    {
        Application.Quit();
    }

}
