/*Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  int sum = 0;
  for (int i = 1; i <= num / 2; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  printf("%d is %s perfect number", num, (sum == num) ? "a": "not a");
  return 0;
} 

