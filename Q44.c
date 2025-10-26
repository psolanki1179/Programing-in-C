/*Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

  int n;
  printf("Enter number of terms: ");
  scanf("%d", &n);
  float sum = 0.0;
  for (int i = 1; i <= n; i++) {
    int numerator = 2 * i - 1;
    int denominator = 2 * i;
    sum += (float)numerator / denominator;
  }
  printf("Approximate sum: %.1f", sum);
  return 0;
}
