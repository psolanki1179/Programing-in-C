/*Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  printf("Prime numbers: ");
  for(int i=2;i<=n;i++){
    int isPrime = 1;
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
        isPrime = 0;
        break;
      }
    }
    if(isPrime){
      printf("%d ",i);
    }
  }
  return 0;
}
