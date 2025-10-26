/*
Q54 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int n = 4; // number of rows in the top half including middle row

    // Upper half including middle row
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars (2*i - 1)
        for (int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n-1; i >= 1; i--) {
        // Print spaces
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars (2*i - 1)
        for (int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}