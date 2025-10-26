/*Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num, original, sum = 0, digits = 0;
  printf("Enter number: ");
  scanf("%d", &num);
  original = num;
  // count digits
  int temp = num;
  while (temp != 0) {
    temp /= 10;
    digits++;
  }
  // calculate sum of cubes
  temp = num;
  while (temp != 0) {
    int remainder = temp % 10;
    sum += pow(remainder, digits);
    temp /= 10;
  }
  printf("%d is %s Armstrong", original, (original == sum) ? "": "not ");
  return 0;
}