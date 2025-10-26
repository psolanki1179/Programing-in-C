/*Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
*/

int main() {
    int n1, n2, t;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");    
    printf("Enter first number: ");
    scanf("%d", &n1);
    
    printf("Enter second number: ");
    scanf("%d", &n2);
    
    printf("Before swap: %d %d", n1, n2);
    
    t = n1; 
    n1 = n2; 
    n2 = t; 
    
    printf("After swap: %d %d", num1, num2);
    
    return 0;
}
