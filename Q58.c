/*Q58 (Arrays (1D))
Find the maximum and minimum element in an array.
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
  int max=arr[0],min=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
    if(arr[i]<min){
      min=arr[i];
    }
  }
  printf("Max=%d, Min=%d",max,min);
  return 0;
}

/*However we can initialize max as INT_MIN and min as INT_MAX. We need to include limits.h for this.

#include <stdio.h>
#include<limits.h>
int main() {
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter array elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int max=INT_MIN,min=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
    if(arr[i]<min){
      min=arr[i];
    }
  }
  printf("Max=%d, Min=%d
",max,min);
  return 0;
}

*/