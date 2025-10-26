/*Q70 (Arrays (1D))
Rotate an array to the right by k positions.*/
#include <stdio.h>

int main() {
    int size, i, k;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    // Input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    // Input array elements
    printf("Enter %d elements of the array:", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Normalize k if greater than size
    k = k % size;

    // Temporary array to store rotated elements
    int rotated[size];

    // Rotate the array to the right by k positions
    for(i = 0; i < size; i++) {
        rotated[(i + k) % size] = arr[i];
    }

    // Output rotated array
    printf("Array after rotating to the right by %d positions:", k);
    for(i = 0; i < size; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}