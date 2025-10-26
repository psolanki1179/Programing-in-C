/*Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	

    int n = 5; // number of rows
    
    // print upper half of the pattern
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i*2-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // print lower half of the pattern
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=i*2-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
