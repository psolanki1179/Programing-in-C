/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
	int n,i,pro=1;
	printf("Enter the value of n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	{
		printf("%d ",i);
		pro*=i;
	}
}
 	printf("Product: %d ", pro);
 	return 0;
}
