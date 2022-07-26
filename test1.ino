#include <Arduino.h>
#include <OneButton.h>

#define BUTTON_PIN 2

OneButton btn = OneButton(
  BUTTON_PIN,  // Input pin for the button
  true,        // Button is active LOW
  true         // Enable internal pull-up resistor
);

// Handler function for a single click:
static void handleClick() {
  Serial.println("Clicked!");
}

// Handler function for a single click:
static void handleDoubleClick() {
  Serial.println("Double Pressed!");
}

void setup() {

  // Single Click event attachment
  btn.attachClick(handleClick);
  
  // Double Click event attachment with lambda
  btn.attachDoubleClick(handleDoubleClick);
}

void loop() {
  btn.tick();
}
