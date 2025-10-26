/*Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  int product = 1;
  while (num != 0) {
    int digit = num % 10;
    if (digit % 2 != 0) {
      product *= digit;
    }
    num /= 10;
  }
  printf("Product of odd digits: %d", product);
  return 0;
}

