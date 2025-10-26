/*Q66 (Arrays (1D)
Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

#include <stdio.h>

int main() {
    int n, key;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    
    printf("Enter size of an array");
    scanf("%d", &n);
	int arr[n]; 
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

     printf("Enter element to be inserted");
    scanf("%d", &key);

    int i;
    // Shift elements greater than key to the right
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the key at the correct position
    arr[i + 1] = key;
    n++; // Increase size to reflect insertion

    // Print the updated sorted array
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}