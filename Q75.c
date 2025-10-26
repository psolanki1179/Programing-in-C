/*Q75 (2D Arrays)
Add two matrices.
*/
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    // Input dimensions of first matrix
    printf("Ehe number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];

    // Input first matrix elements
    printf("Enter the elements of the first matrix:");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    int matrix2[rows2][cols2];

    // Input second matrix elements
    printf("Enter the elements of the second matrix:");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible because dimensions do not match.");
        return 1;
    }

    int sum[rows1][cols1];

    // Add matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print result
    printf("The sum of the two matrices is:");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}