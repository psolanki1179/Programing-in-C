/*Q72 (2D Arrays)
Find the sum of all elements in a matrix.*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter matrix elements:");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements: %d", sum);
    return 0;
}