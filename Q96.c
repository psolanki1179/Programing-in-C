/*Q96 (Strings)
Reverse each word in a sentence without changing the word order.
*/
#include <stdio.h>
#include <string.h>

int main()
            {
    char str[200];
    int start = 0, end = 0, len, i;
    char temp;

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter a sentence: ");
    gets(str);

    len = strlen(str);

    while(end <= len)
    {
        if(str[end] == ' ' || str[end] == '\0')
        {
            int left = start, right = end - 1;

            while(left < right)
            {
                temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = end + 1;
        }
        end++;
    }

    printf("%s\n", str);

    return 0;
}
