/*Q49 (Nested Loops without Arrays/Strings)
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
	
  int rows = 5; // default rows, can be taken as input
  int k=5;
  for (int i = 1; i <= rows; i++) {
    for (int j = k; j >= k-i+1; j--) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}