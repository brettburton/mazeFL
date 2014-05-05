 void sensors(){
 
   

//READ ALL THREE SENSORS 

  val0 = analogRead(sensorPin0);
  val1 = analogRead(sensorPin1); 
  val2 = analogRead(sensorPin2);

sensor0();
sensor1(); //UNCOMMENT THESE ON FOR OUR OTHER RINGS
sensor2();

  
//  Serial.print("sensor 0 = ");
//  Serial.println(val0);
//  Serial.print("sensor 1 = ");
//  Serial.println(val1);
//  Serial.print("sensor 3 = ");
//  Serial.println(val2);
 
 }
 

 //------------  SENSOR 0  ------////////
  void sensor0(){
  if ( val0 < sensitivity ) {
    
       if (sentYet0 == false){
        Serial.println("Goal");//sens a message to oF through serial
        win0(); //run our LED animation
        sentYet0 = true;
        waiting();
       }
  
       else {
        sentYet0 = false;
      } 
  }
  }
  
  
  //------------  SENSOR 1  ------////////

  void sensor1(){
  if ( val1 < sensitivity ) {
    
       if (sentYet1 == false){
        Serial.println("Goal");//sens a message to oF through serial
        win1(); //run our LED animation
        sentYet1 = true;
        waiting();
       }
  
       else {
        sentYet1 = false;
      } 
  }
  }

  
  //------------  SENSOR 2  ------////////
  
  void sensor2(){
  if ( val2 < sensitivity ) {
    
       if (sentYet2 == false){
        Serial.println("Goal");//sens a message to oF through serial
        win2(); //run our LED animation
        sentYet2 = true;
        waiting();
       }
  
       else {
        sentYet2 = false;
      } 
  }
  }
  
  
  
