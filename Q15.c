/*Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	char i;
	
	printf("Input any thing: ");
	scanf("%c",&i);
	
	if(i>='A'&&i<='Z')
	{
	printf("It is an Uppercase alphabet");
	}
	else if(i>='a'&&i<='z')
	{
	printf("It is a Lowercase alphabet");
	}
	else if(i=='1'||i=='2'||i=='3'||i=='4'||i=='5'||i=='6'||i=='7'||i=='8'||i=='9'||i=='0')
	{
	printf("It is a Digit");
	}
	else
	{
		printf("Special character");
	}
	
	
}