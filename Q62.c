/*Q62 (Arrays (1D))
Reverse an array without taking extra space.*/

#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter array elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int rev;
  for(int i=0;i<n;i++){
  rev= rev* 10 + n % 10;
  n /= 10;
}
printf("Reverse: %d", rev);
  return 0;
}
