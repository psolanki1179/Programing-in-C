/*Q89 (Strings)
Count frequency of a given character in a string.*/
int main()
            {
    char str[100], ch;
    int i = 0, count = 0;

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}
