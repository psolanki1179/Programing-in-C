/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print descending numbers from i down to 1
        for (int k = rows - i + 1; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
