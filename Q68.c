/*Q68 (Arrays (1D))
Delete an element from an array.*/
#include <stdio.h>

int main() {
    int size, i, position;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    // Input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements of the array:", size);
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    // Input position of element to delete
    printf("Enter position of element to delete: ");
    scanf("%d", &position);

    // Validate position
    if(position < 1 || position > size) {
        printf("Invalid position! Position should be between 1 and %d", size);
        return 1;
    }

    // Shift elements to the left to delete element at given position
    for(i = position - 1; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }

    // Decrease size after deletion
    size--;

    // Output updated array
    printf("Updated array elements:");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}