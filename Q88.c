/*
Q88 (Strings)
Replace spaces with hyphens in a string.
*/
#include <stdio.h>

int main()
            {
    char str[100];
    int i = 0;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    printf("Enter a string: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("%s\n", str);

    return 0;
}
