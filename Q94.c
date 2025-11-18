/*Q94 (Strings)
Find the longest word in a sentence.
*/
#include <stdio.h>
#include <string.h>

int main()
            {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter a sentence: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            len = strlen(word);
            if(len > maxLen)
            {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    len = strlen(word);
    if(len > maxLen)
    {
        maxLen = len;
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
