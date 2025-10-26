/*Q56 (Arrays (1D))
Read and print elements of a one-dimensional array.
*/

#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // declare array with user-defined size
    
    printf("Enter %d elements:", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("You entered: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
