/*Q86 (Strings)
Check if a string is a palindrome.
*/
#include <stdio.h>
#include <string.h>

int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    char str[100];
    int i, j, flag = 1;
    scanf("%s", str);
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}