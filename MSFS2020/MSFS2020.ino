//Including a library
#include <Gamepad.h>
#include <Encoder.h>

//Initializing a Gamepad
Gamepad gp;

//Initializing a Encoder, the numbers are the pin in the hardware
Encoder altitude(5, 6);

//Setting gamepad buttons to windows
int button1 = 0;
int button2 = 1;
int button3 = 2;

void setup() {
//Pin modes
pinMode(7, INPUT);
pinMode(8, INPUT);
pinMode(9, INPUT);

long right = -999;

}

void loop() {
  
  if (9 == true){
	  
	gp.setButtonState(button3, true);
	
	else 
		
	gp.setButtonState(button3; false);
	
  }
  
  long newright;
  newright = altitude.read();

  if (newright > right){

      gp.setButtonState(button1, true);
    
	else
      
	  gp.setButtonState(button1,false);
      
  }
  if (right > newright){
      
      gp.setButtonState(button2, true);
     
	 else
		 
      gp.setButtonState(button2, false);

     
    
  }
  

}
