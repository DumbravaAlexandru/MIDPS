using UnityEngine;
using System.Collections;

public class carControl : MonoBehaviour {

    public float carSpeed;
    public float maxPos = 2.64f;
    Vector3 position;

    public uiManager ui;
    public AudioManager am;
	bool currntFlatformAndroid=false;
	Rigidbody2D rb;

    // Use this for initialization
    void Start () {
		if (currntFlatformAndroid == true) {
			Debug.Log ("Android");
		} else {
			Debug.Log ("Window");
		}
        am.carSound.Play();
        position = transform.position;
    }

	void Awake(){
		rb = GetComponent<Rigidbody2D> ();
        #if UNITY_ANDROID
		currntFlatformAndroid=true;
		#else
		currntFlatformAndroid=false;
		#endif
	}
	
	// Update is called once per frame
	void Update () {

		if (currntFlatformAndroid == true) {
			//android specific code
			TouchMove();
		} else {
			position.x += Input.GetAxis ("Horizontal") * carSpeed * Time.deltaTime;
			position.x = Mathf.Clamp (position.x, -2.5f, 2.64f);
			transform.position = position;
		}
		position = transform.position;
		position.x = Mathf.Clamp (position.x, -2.5f, 2.64f);
		transform.position = position;
    }
    void OnCollisionEnter2D(Collision2D col)
    {
        if (col.gameObject.tag == "Enemy Car")
        {
            //Destroy(gameObject);
			gameObject.SetActive(false);
			ui.gameOverActivated();
            am.carSound.Stop();
        }
    }

	void TouchMove(){
		if (Input.touchCount > 0) {

			Touch touch = Input.GetTouch (0);

			float middle = Screen.width / 2;

			if (touch.position.x < middle && touch.phase == TouchPhase.Began) {
				MoveLeft ();
			} else if (touch.position.x > middle && touch.phase == TouchPhase.Began) {
				MoveRight ();
			}		
		} else
			SetVelocityZero ();
	}
	public void MoveLeft(){
		rb.velocity = new Vector2 (-carSpeed, 0);		
	}

	public void MoveRight(){
		rb.velocity = new Vector2 (carSpeed, 0);
	}
	public void SetVelocityZero(){
		rb.velocity = Vector2.zero; 
	}

}




