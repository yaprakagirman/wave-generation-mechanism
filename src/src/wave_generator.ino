#include <Stepper.h>

// A standard NEMA 17 stepper motor typically has 200 full steps per revolution.
const int STEPS_PER_REVOLUTION = 200;
const int POTENTIOMETER_PIN = A0;

// L298N inputs IN1-IN4 are connected to Arduino digital pins D1-D4.
// D1 is also the serial TX pin; see the README before remapping these pins.
Stepper motor(STEPS_PER_REVOLUTION, 1, 2, 3, 4);

void setup() {
  // No initialization is required for this open-loop controller.
}

void loop() {
  const int potentiometerValue = analogRead(POTENTIOMETER_PIN);

  // Convert the potentiometer range into the tested motor-speed range.
  const int speedRpm = map(potentiometerValue, 0, 1023, 5, 80);
  motor.setSpeed(speedRpm);

  // Move one step per loop iteration for continuous single-direction motion.
  motor.step(1);
}
