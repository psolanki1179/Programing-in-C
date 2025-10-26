/*Q80 (2D Arrays)
Multiply two matrices.*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	   
    printf("Enter rows and columns for first matrix:");
    scanf("%d %d", &r1, &c1);
    
    int matrix1[100][100];
    printf("Enter elements of first matrix:");
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            scanf("%d", &matrix1[i][j]);
    
    printf("Enter rows and columns for second matrix:");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrix multiplication not possible (column count of first matrix must match row count of second).");
        return 0;
    }
    
    int matrix2[100][100];
    printf("Enter elements of second matrix:");
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            scanf("%d", &matrix2[i][j]);
    
    int result[100][100] = {0};
    
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    printf("Resultant matrix after multiplication:");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}