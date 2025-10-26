/*Q79 (2D Arrays)
Perform diagonal traversal of a matrix.*/
#include <stdio.h>

int main() {
    int n, m;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    printf("Enter number of rows and columns:");
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    printf("Enter elements of the matrix:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:");
    for (int d = 0; d < n + m - 1; d++) {
        int r = (d < m) ? 0 : d - m + 1;
        int c = (d < m) ? d : m - 1;

        if (d % 2 == 0) {
            // Traverse upward diagonals
            int temp[100];
            int count = 0;
            while (r < n && c >= 0) {
                temp[count++] = matrix[r][c];
                r++;
                c--;
            }
            for (int k = count - 1; k >= 0; k--) {
                printf("%d ", temp[k]);
            }
        } else {
            // Traverse downward diagonals
            while (r < n && c >= 0) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
    return 0;
}