/*Q20 (Conditional Statements)
Write a program to display the day of the week based on a number (1–7) using switch-case.
*/
#include <stdio.h>
int main()
 {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	    
	int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    
    switch(day)
	 {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day number");
    }
    
    return 0;
}
