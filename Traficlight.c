#include <stdio.h> 
#include <unistd.h> 
 
#define PIN_8 8 
#define PIN_3 3 
#define PIN_2 2 
 
void setup() { 
    // Initialization code, not needed in C 
} 
 
void loop() { 
    // Set PIN_8 high and others low 
    digitalWrite(PIN_8, HIGH); 
    digitalWrite(PIN_3, LOW); 
    digitalWrite(PIN_2, LOW); 
    usleep(5000000); // Wait for 5000 milliseconds (5000 * 1000 microseconds) 
     
    // Set PIN_3 high and others low 
    digitalWrite(PIN_8, LOW); 
    digitalWrite(PIN_3, HIGH); 
    digitalWrite(PIN_2, LOW); 
    usleep(2000000); // Wait for 2000 milliseconds (2000 * 1000 microseconds) 
    // Set PIN_2 high and others low 
    digitalWrite(PIN_8, LOW); 
    digitalWrite(PIN_3, LOW); 
    digitalWrite(PIN_2, HIGH); 
    usleep(5000000); // Wait for 5000 milliseconds (5000 * 1000 microseconds) 
} 
 
int main() { 
    // Set pins as output 
    pinMode(PIN_8, OUTPUT); 
    pinMode(PIN_3, OUTPUT); 
    pinMode(PIN_2, OUTPUT); 
 
    // Run the loop function indefinitely 
    while (1) { 
        loop(); 
    } 
 
    return 0; 
}
