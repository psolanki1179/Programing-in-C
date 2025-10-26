/*Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array.*/
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
  int pos=0,neg=0,zero=0;
  for(int i=0;i<n;i++){
    if(arr[i]>0){
      pos++;
    }else if(arr[i]<0){
      neg++;
    }else{
      zero++;
    }
  }
  printf("Positive=%d, Negative=%d, Zero=%d",pos,neg,zero);
  return 0;
}
