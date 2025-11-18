/*Q85 (Strings)
Reverse a string.
*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    char str[100];
    int i, j;
    char temp;

    
    scanf("%s", str);

    
    for (i = 0; str[i] != '\0'; i++);
    j = i - 1; 
    i = 0;     
    
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    
    printf("%s", str);

    return 0;
}