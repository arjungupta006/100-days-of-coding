//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    const char* lightNames[] = { "RED", "YELLOW", "GREEN" };    
    int numLights = sizeof(lightNames) / sizeof(lightNames[0]); 
    for (int i = 0; i < numLights; i++) {
        printf("%s=%d\n", lightNames[i], i);
    }   
                                                                                                   
    return 0;
}