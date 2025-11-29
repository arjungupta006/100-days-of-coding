//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight light;

    int choice;
    printf("Enter light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &choice);

    light = choice;

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light\n");
    }

    return 0;
}