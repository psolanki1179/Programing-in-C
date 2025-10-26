/*Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  int hcf = 1;
  for (int i = 1; i <= num1 && i <= num2; i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      hcf = i;
    }
  }
  printf("HCF of %d and %d: %d", num1, num2, hcf);
  return 0;
}

