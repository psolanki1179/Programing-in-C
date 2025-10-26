/*Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.
*/
#include <stdio.h>

int main() {
    int rows, cols;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    // Input message for matrix size
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSums[rows];

    // Input message for matrix elements
    printf("Enter the elements of the matrix:");

    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    // Output sum of each row
    printf("Sum of each row:");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}