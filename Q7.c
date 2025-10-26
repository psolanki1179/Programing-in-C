/*Q7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable.
*/
int main() {
    int num1, num2;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Before swap: %d %d", num1, num2);
    
   num1 = num1 + num2;  /*num1 now holds sum*/
    num2 = num1 - num2; /* num2 now holds original num1*/
    num1 = num1 - num2; /* num1 now holds original num2*/
    
    printf("After swap: %d %d", num1, num2);
    
    return 0;
}
