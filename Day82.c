// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

int main()
{
    // define enum
    enum Light { RED, YELLOW, GREEN };
    
    char input[10];
    scanf("%s", input);   // read the traffic light name

    enum Light signal;

    // convert string to enum value
    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    // print message based on enum
    switch (signal)
    {
        case RED:    printf("Stop"); break;
        case YELLOW: printf("Wait"); break;
        case GREEN:  printf("Go");   break;
    }

    return 0;
}
