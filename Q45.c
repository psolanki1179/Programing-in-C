/*Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
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
    int numerator = 2 * i + 2 - 2; // optimized: 2*i
    int denominator = 2 * i + 3 - 2; // optimized: 2*i + 1 then 2i+1 to 2*i+1-2+2 so 2i+1 
    sum += (float)numerator / (2*i + 1);
  }
  printf("Approximate sum: %.2f", sum);
  return 0;
}
