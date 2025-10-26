/*Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.
*/

int main()
 {
    float celsius, fahrenheit;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    
    printf("Fahrenheit = %.0f", fahrenheit);
    
    return 0;
}
