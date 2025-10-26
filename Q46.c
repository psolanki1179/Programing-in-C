/*Q46 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/

#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int rows = 5; // default rows, can be taken as input
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 5; j++) { // columns
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
 