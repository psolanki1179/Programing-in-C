/*Q69 (Arrays (1D))
Find the second largest element in an array.*/
#include <stdio.h>

int main() {
    int size, i;
 	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
   
    printf("Enter size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array needs to have at least two elements to find the second largest element.");
        return 1;
    }

    int arr[size];
    printf("Enter %d elements of the array:", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int first = arr[0], second = -2147483648; // smallest int value
    for(i = 1; i < size; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -2147483648) {
        printf("All elements are equal or no second largest element.");
    } else {
        printf("Second largest element:%d", second);
    }

    return 0;
}