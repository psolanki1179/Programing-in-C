/*Q18 (Conditional Statements)
Write a program to assign grades based on a percentage input.
*/
# include <stdio.h>
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	int i;
	printf("Enter Percentage: ");
	scanf("%d",&i);
	
	if(i>=90&&i<=100)	
	{
		printf("Grades A");
	}
	else if(i>=80&&i<=89)
	{
		printf("Grades B");
	}
	else if(i>=70&&i<=79)
	{
		printf("Grades C");
	}
	else if(i>=60&&i<=69)
	{
		printf("Grades D");
	}
	else if(i<60)
	{
		printf("Grades F");
	}
	else
	{
		printf("WRONGH\n ERROR");
	}
	return 0;
	
}