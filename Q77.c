/*Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct.*/
#include <stdio.h>
#include <stdbool.h>

bool check_diagonal_distinct(int matrix[][100], int rows, int cols) {
    int diagonal_elements[100];
    int count = rows; // Matrix is square
    
    for (int i = 0; i < count; i++) {
        diagonal_elements[i] = matrix[i][i];
    }
    
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diagonal_elements[i] == diagonal_elements[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int rows, cols;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    printf("Enter number of rows and columns of the square matrix:");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    printf("Enter the elements of the %d x %d matrix:", rows, cols);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (check_diagonal_distinct(matrix, rows, cols)) {
        printf("All diagonal elements are distinct.");
    } else {
        printf("Diagonal elements are not distinct.");
    }
    return 0;
}