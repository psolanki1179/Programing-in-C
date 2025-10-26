/*
Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  int digits = 0;
  int temp = num;
  // count digits
  while (temp != 0) {
    temp /= 10;
    digits++;
  }
  temp = num;
  // separate first and last digits
  int first_digit = temp / (int)pow(10, digits - 1);
  int last_digit = temp % 10;
  // remove first and last digits
  int remaining = (temp / 10) % (int)pow(10, digits - 2);
  // swap first and last digits
  int swapped_num = last_digit * (int)pow(10, digits - 1) + remaining * 10 + first_digit;
  printf("Swapped number: %d", swapped_num);
  return 0;
}