/*Q90 (Strings)
Toggle case of each character in a string.
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
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; 
        i++;
    }

    printf("%s\n", str);

    return 0;
}
