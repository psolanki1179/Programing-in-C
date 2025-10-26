/*Q35 (Loops without Arrays/Strings)
Write a program to print all factors of a given number.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  printf("Factors of %d: ", num);
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      printf("%d ", i);
    }
  }
  printf("");
  return 0;
}

