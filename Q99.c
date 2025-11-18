/*Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>
#include <string.h>

int main()
            {
    char date[20];
    int day, month, year;
    char months[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    printf("Enter date in dd/mm/yyyy format: ");
    gets(date);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if(month < 1 || month > 12)
        printf("Invalid month!\n");
    else
        printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
