/*Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num, original, reverse = 0;
  printf("Enter number: ");
  scanf("%d", &num);
  original = num;
  while (num != 0) {
    reverse = reverse * 10 + num % 10;
    num /= 10;
  }
  printf("%d is %s palindrome", original, (original == reverse) ? "": "not ");
  return 0;
}