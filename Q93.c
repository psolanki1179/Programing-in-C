/*Q93 (Strings)
Check if two strings are anagrams of each other.*/
#include <stdio.h>

int main()
            {
    char str1[100], str2[100];
    int freq[26] = {0}, i;
    int isAnagram = 1;

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

      for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;
    }

    
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
