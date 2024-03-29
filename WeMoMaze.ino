#include <Adafruit_NeoPixel.h>

#define PIN 6 //PIN FOR RING 0



// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(72, PIN, NEO_GRB + NEO_KHZ800);





// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

int sensorPin0 = 3; //analog pin 0 for sensor 1
int val0 = 0; //a value for our 1st sensor reading
boolean sentYet0 = false; //did we send our win message yet?

int sensorPin1 =4; //analog pin 1 for sensor 2
int val1 = 0; //a value for our 2nd sensor reading
boolean sentYet1 = false; //did we send our win message yet?

int sensorPin2 = 5; //analog pin 2 for sensor 3
int val2 = 0; //a value for our 3rd sensor reading
boolean sentYet2 = false; //did we send our win message yet?

int sensitivity = 600; //distance threshold for the proximity sensor
//550-570 was my range when nothing was in proximity
//range was 800 - 830 when I tested it the next day.  Whut?


void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  Serial.begin(9600);
  
  waiting(); //start state for our LED ring
  
}

void loop() {
  
sensors(); //Detect the ping pong balls

}

