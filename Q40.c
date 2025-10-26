/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

  char bin[100];
  printf("Enter binary number: ");
  scanf("%s", bin);
  printf("1's complement: ");
  for (int i = 0; bin[i]; i++) {
    printf("%c", (bin[i] == '0') ? '1' : '0');
  }
  printf(" ");
  return 0;
}

