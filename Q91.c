/*Q91 (Strings)
Remove all vowels from a string.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeVowels(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);  
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            str[j++] = str[i];     
        }
    }
    str[j] = '\0';  
}

int main() {
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    
    text[strcspn(text, "\n")] = '\0';

    removeVowels(text);
    printf("String without vowels: %s\n", text);

    return 0;
}
