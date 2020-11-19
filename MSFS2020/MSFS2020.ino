//Including a library
#include <Gamepad.h>
#include <Encoder.h>


//Initializing a Gamepad
Gamepad gp;

Encoder altitude(5, 6);

int button1 = 0;
int button2 = 1;

void setup() {

pinMode(5, INPUT);
pinMode(6, INPUT);

long right = -999;

}

void loop() {
  
  long newright;
  newright = altitude.read();

  if (newright > right){

      gp.setButtonState(button1, true);
      delay(1);
      gp.setButtonState(button1,false);
      
  }
  if (right > newright){
      
      gp.setButtonState(button2, true);
      delay(1);
      gp.setButtonState(button2, false);

      newright = right
    
  }
  

}
