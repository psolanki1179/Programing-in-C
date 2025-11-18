/*Q92 (Strings)
Find the first repeating lowercase alphabet in a string.

*/
#include <stdio.h>

int main()
            {
    char str[100];
    int freq[26] = {0};
    int i, found = 0;

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter a lowercase string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2)
            {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found)
        printf("No repeating character found\n");

    return 0;
}
