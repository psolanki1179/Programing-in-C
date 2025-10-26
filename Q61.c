/*Q61 (Arrays (1D))
Search for an element in an array using linear search.
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
  int target;
  printf("Enter target element: ");
  scanf("%d",&target);
  int found = -1;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      found = i;
      break;
    }
  }
  if(found!=-1){
    printf("Found at index %d",found);
  }else{
    printf("-1");
  }
  return 0;
}