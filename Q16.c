/*Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	int n1,n2,n3;
	printf("Input three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>=n2 && n1>=n3) 
	{
        printf("%d", n1);
    } 
	else if(n2>=n1 && n2>=n3)
	 {
        printf("%d", n2);
    }
	 else
	  {
        printf("%d", n3);
    }
    
}