/*Q19 (Conditional Statements)
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	int s1,s2,s3;
	printf("Input three numbers: ");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1==s2&&s2==s3) 
	{
        printf("Equilateral");
    } 
    else if(s1==s2 || s2==s3 || s1==s3) 
	{
        printf("Isosceles");
    } 
    else 
	{
        printf("Scalene");
    } 
}