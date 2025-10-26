/*Q67 (Arrays (1D))
Insert an element in an array at a given position.*/
#include <stdio.h>

int main() {
    int size, i, position, element;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    // Input array size
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; // +1 to accommodate new element

    // Input array elements
    printf("Enter %d elements of the array:\n", size);
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    // Input position and element to insert
    printf("Enter position and element to insert:\n");
    scanf("%d %d", &position, &element);

    // Validate position
    if(position < 1 || position > size + 1) {
        printf("Invalid position! Position should be between 1 and %d", size + 1);
        return 1;
    }

    // Shift elements from position to right to make space for new element
    for(i = size; i >= position; i--){
        arr[i] = arr[i - 1];
    }

    // Insert element at given position (1-based index)
    arr[position - 1] = element;

    // Increase size after insertion
    size++;

    // Output updated array
    printf("Updated array elements:\n");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}