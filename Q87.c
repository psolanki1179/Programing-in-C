/*Q87 (Strings)
Count spaces, digits, and special characters in a string.*/
#include <stdio.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    char str[100];
    int i ;
    int spaces = 0, digits = 0, special = 0;
	 printf("Enter a string: ");
   // scanf("%s", str);
	/////gets(str);
	fgets(str,100,stdin);
    for (i= 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
