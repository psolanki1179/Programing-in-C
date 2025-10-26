/*Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.
*/
# include <stdio.h>
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	float a,b,c,D,r1,r2,real,imag;
	printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);
    
    D = b*b - 4*a*c;
    
   if(D>0)
   {
   	r1=(-b+sqrt(D))/(2*a);
   	r2=(-b-sqrt(D))/(2*a);
   	printf("Roots are real and different: %.2f, %.2f", r1, r2);
	}
	 else if(D == 0) 
	 {
        r1 = -b / (2*a);
        printf("Roots are real and same: %.2f", r1);
    } 
	else
	{
        real = -b / (2*a);
        imag = sqrt(-D) / (2*a);
        printf("Roots are complex: %.2f + %.2fi, %.2f - %.2fi", real, imag, real, imag);
    }
    

    return 0; 
}