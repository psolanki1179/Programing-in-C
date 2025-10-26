/*Q34 (Loops without Arrays/Strings)
Write a program to check if a number is prime.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  if (num <= 1) {
    printf("%d is not prime", num);
  } else {
    int is_prime = 1;
    for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        is_prime = 0;
        break;
      }
    }
    printf("%d is %s prime", num, (is_prime) ? "": "not ");
  }
  return 0;
}

