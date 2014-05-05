void waiting(){
  colorWipe0(strip.Color(0, 255, 0), 50); // Green
  colorWipe1(strip.Color(0, 255, 0), 50); // Green
  colorWipe2(strip.Color(0, 255, 0), 50); // Green
  //colorWipe(strip.Color(0, 0, 0), 50); // OFF 
}


void win0() {
  theaterChaseRainbow0(40); //PASSING IN THE SPEED VALUE
  colorWipe0(strip.Color(0, 0, 0), 40); // OFF
}


void win1() {
  theaterChaseRainbow1(40); //PASSING IN THE SPEED VALUE
  colorWipe1(strip.Color(0, 0, 0), 40); // OFF
}


void win2() {
  theaterChaseRainbow2(40); //PASSING IN THE SPEED VALUE
  colorWipe2(strip.Color(0, 0, 0), 40); // OFF
}


