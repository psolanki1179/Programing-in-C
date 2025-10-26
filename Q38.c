/*Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.
*/#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  printf("Sum of digits: %d", sum);
  return 0;
}
