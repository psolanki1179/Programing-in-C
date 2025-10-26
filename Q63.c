/*Q63 (Arrays (1D))
Merge two arrays.
*/
#include <stdio.h>
int main(){
	int m,n,i;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
		
	printf("print size of Array 1 ");
	scanf("%d",&m);
	int a1[m];
	printf("\nEnter Array 1 element ");
	for(i=0;i<m;i++){
		scanf("%d",&a1[i]);
  	}
  	 	
	printf("\nprint size of Array 2 ");
	scanf("%d",&n);
	int a2[n]; 
	printf("\nEnter Array 2 element ");
	for(i=0;i<n;i++){
		scanf("%d",&a2[i]);
  	}
  	int a[m+n];
  	for(i=0;i<m;i++)
  	a[i]=a1[i];
	for(i=0;i<n;i++)
	a[m+i]=a2[i];
	  printf("Merged array: ");
	  for(i=0;i<m+n;i++)
	  printf("%d",a[i]);
	  return 0;	
	}