/*Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
	int n,i,sum=0;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=1;i<=n*2;i++)
	{
	if(i%2!=0)
	{
	printf("%d ",i);
	sum += i;
	}
	}
	printf("Sum: %d ", sum);
 	return 0;
}
