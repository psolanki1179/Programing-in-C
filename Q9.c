/*Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
	float p,r,t;
	printf("Enter Principle value : ");
	scanf("%f",&p);
	printf("Enter Rate  : ");
	scanf("%f",&r);
	printf("Enter Time : ");
	scanf("%f",&t);
	
	float si=(p*r*t)/100;
	printf("Simple Intrest = %.2f ",si);
	float ci=(p* pow((1+r/100),t)-p);
	printf("Compound Interest = %.2f", ci);
    return 0;
	
}