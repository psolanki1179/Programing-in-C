/*Q81 (Strings)
Count characters in a string without using built-in length functions.
*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    char str[1000];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    int count = 0;
    while (str[count] != '\0') {
        count++;
    }

    // Remove newline from count if present
    if (count > 0 && str[count - 1] == '\0'){
	
        count--;
    }

    printf("Number of characters: %d", count-1);

    return 0;
}