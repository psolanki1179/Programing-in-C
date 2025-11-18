/*Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    char str[100];
    int i = 0;

    scanf("%s", str);

    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  
        }
        i++;
    }

   
    printf("%s", str);

    return 0;
}