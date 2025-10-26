/*Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int n, reversed = 0;
  printf("Enter number: ");
  scanf("%d", &n);
  while (n != 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  printf("Reversed: %d", reversed);
  return 0;
}