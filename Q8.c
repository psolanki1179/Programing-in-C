/*Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
	int i,n,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum %d",sum);
}