/*Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/
int main()
{
	char c;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
	printf("Enter a Character ; ");
	scanf("%c",&c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("It is a Vowel");
	}
	else
	{
		printf("It is a Consonant");
	}
}