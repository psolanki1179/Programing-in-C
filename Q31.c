/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  for (; n > 0; n /= 2) {
    printf("%d", n % 2);
  }
  printf("");
  // Or using library function:
  // printf("%b", n); (not standard) 
  // So we can use
  printf("Binary of number is %d = ", n);
  n = 10; // reset n
  while (n > 0) {
    printf("%d", n % 2);
    n /= 2;
  }
  return 0;
}
