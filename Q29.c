/*Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int n, i, fact = 1;
  printf("Enter number: ");
  scanf("%d", &n);
  if (n < 0) printf("Factorial not possible");
  else if (n == 0 || n == 1) printf("Factorial: 1");
  else {
    for (i = 2; i <= n; i++) {
      fact *= i;
    }
    printf("Factorial: %d", fact);
  }
  return 0;
}

