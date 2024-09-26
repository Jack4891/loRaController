enum instructionStates{
  OFF,
  NOTHING,
  CHANGEPITCH,
  STARTBRAEK,
  STOPBREAK,
  INVALIDCOM,
};




void setup() {
  //TODO:
  //init pins needed

}

void loop() {
  //TODO:
  //Init UART LoRa Communication

  enum instructionStates currentState;
  //TODO:
  //Make a function that checks buttons/switchs and returns a corresponding state

  //TODO:
  //Setup FSM to work with the variable instructionStates
}


//TODO:
//Write function that takes the address of currentState, 
//returns a true if successful
//returns a false if failed
//I (Scott) can do this one


//TODO:
//Write a function that checks the value of a potentiometer
//returns the value read as an int

//TODO:
//Write a value to see if a switch has been flipped (on)
//if the switch is on, return true
//if the switch is off, return false


