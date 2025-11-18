/*Q97 (Strings)
Print the initials of a name.*/
#include <stdio.h>
#include <string.h>

int main()
            {
    char name[100];
    int i = 0;
    
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter a full name: ");
    gets(name);
  
    if(name[0] != ' ')
        printf("%c", name[0]);

    
    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
            printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
