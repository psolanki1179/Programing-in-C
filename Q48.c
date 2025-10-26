/*Q48 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
1
12
123
1234
12345*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int rows = 5; // default rows, can be taken as input
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}
