/*Q98 (Strings)
Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>

int main()
            {
    char name[100];
    int i, len, lastSpace = -1;

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter a full name: ");
    gets(name);

    len = strlen(name);

    for(i = 0; i < len; i++)
    {
        if(name[i] == ' ')
            lastSpace = i;
    }

    if(name[0] != ' ')
        printf("%c. ", name[0]);

    for(i = 1; i < len; i++)
    {
        if(name[i - 1] == ' ' && i < lastSpace)
            printf("%c. ", name[i]);
    }

    
    for(i = lastSpace + 1; i < len; i++)
    {
        printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
