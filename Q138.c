/*Q138: Print all enum names and integer values using a loop.

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


enum Color { RED, YELLOW, GREEN };

int main() {
    printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    
    const char *colorNames[] = { "RED", "YELLOW", "GREEN" };

    
    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }

    return 0;
}
