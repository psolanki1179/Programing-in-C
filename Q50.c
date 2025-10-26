/*Q50 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int rows = 5; // default rows, can be taken as input
  for (int i = rows; i >= 1; i--) {
    for (int k=rows-i;k>=1;k--) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}