/*Q43 (Loops without Arrays/Strings)
Write a program to check if a number is a strong number.
*/
#include <stdio.h>
int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");


  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  int sum = 0, temp = num;
  while (temp != 0) {
    int remainder = temp % 10;
    sum += factorial(remainder);
    temp /= 10;
  }
  printf("%d is %s strong number", num, (sum == num) ? "a": "not a");
  return 0;
}
