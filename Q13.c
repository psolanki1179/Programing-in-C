/*Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <stdio.h>
int main()
{
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
		
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
        printf("%d is a Leap year", year);
    } else {
        printf("%d is Not a leap year", year);
    }
    
    return 0;
}
