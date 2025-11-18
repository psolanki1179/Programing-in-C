/*Q95 (Strings)
Check if one string is a rotation of another.*/
#include <stdio.h>
#include <string.h>

int main()
            {
    char str1[100], str2[100], temp[200];
    
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Not Rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}
