/*Q78 (2D Arrays)
Find the sum of main diagonal elements for a square matrix.*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    int rows, cols;
    printf("Enter number of rows and columns of the square matrix:\n");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    printf("Enter the elements of the %d x %d matrix:\n", rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];  // main diagonal elements
    }

    printf("Sum of main diagonal elements: %d", sum);

    return 0;
}