/*Q57 (Arrays (1D))
Find the sum of array elements.*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // declare array with user-defined size
    int sum = 0; // initialize sum variable
    
    printf("Enter %d elements:", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add each element to sum
    }
    
    printf("Sum of elements: %d", sum);
    
    return 0;
}