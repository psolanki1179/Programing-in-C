/*Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  int max = (num1 > num2) ? num1 : num2;
  int lcm = max;
  while (1) {
    if (lcm % num1 == 0 && lcm % num2 == 0) {
      break;
    }
    lcm += max;
  }
  printf("LCM of %d and %d: %d", num1, num2, lcm);
  return 0;
}

