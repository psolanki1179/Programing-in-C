/*Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/

int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	int s,m,r,h;
	printf("Enter time in seconds");
	scanf("%d",&s);
	h=s/3600;// divide by 3600 (60*60) for hours
	r=s%3600;// remaining seconds after hours
	m=r/60;// minutes
	s=r%60;// update seconds
	printf("%d : %d : %d",h,m,s);
	return 0;
	
}