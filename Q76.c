/*Q76 (2D Arrays)
Check if a matrix is symmetric.*/
#include <stdio.h>

int main() {
    int n;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    // Input order of square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    int symmetric = 1; // Assume symmetric unless proven otherwise
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    // Output result
    if (symmetric) {
        printf("The matrix is symmetric: True");
    } else {
        printf("The matrix is not symmetric: False");
    }

    return 0;
}