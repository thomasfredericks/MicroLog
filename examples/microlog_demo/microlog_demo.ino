// Example: MicroLog Demo
// Demonstrates logging with MicroLog library

// Comment the following line to disable all MICRO_LOG calls
#define MICRO_LOG_OUTPUT Serial
// Optional: change default separator (default is space " ")
// #define MICRO_LOG_SEPARATOR "|"
#include <MicroLog.h>

int numbers[] = {10, 20, 30};

void setup() {
  // Initialize Serial at 115200 baud
  MICRO_LOG_BEGIN(115200);

  pinMode(2, INPUT);
  pinMode(3, INPUT);

}

void loop() {
  // Example: logging repeatedly every second
  MICRO_LOG("Millis :", millis());

  // Logging multiple values (up to 9)
  MICRO_LOG("State of pin", 3, "is", digitalRead(3), 
            "and state of pin", 2, "is", digitalRead(2));

  // Logging an array
  MICRO_LOG_ARRAY(numbers, 3);

  delay(1000); // Wait 1 second
}