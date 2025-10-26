/*Q65 (Arrays (1D))
Search in a sorted array using binary search.*/
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // To avoid overflow
        if (arr[mid] == target)
            return mid; // Found at mid
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Not found
}

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int n, target;
    printf("Enter size of an Array");
    scanf("%d", &n);
    int arr[n];
     printf("Enter Element of an Array");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
         printf("Enter Element You have to find in an Array");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Found at index %d", result);
    else
        printf("-1");
    return 0;
}