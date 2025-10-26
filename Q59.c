/*Q59 (Arrays (1D))
Count even and odd numbers in an array.
*/

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
  int even=0,odd=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      even++;
    }else{
      odd++;
    }
  }
  printf("Even=%d, Odd=%d",even,odd);
  return 0;
}
