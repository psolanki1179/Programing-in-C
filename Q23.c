/*Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows:
First 5 days late: ?2/day
Next 5 days late: ?4/day
Next 20 days days late: ?6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int days;
  printf("Enter late days: ");
  scanf("%d", &days);
  if (days <= 5)
   {
    printf("Fine: ?%d", days * 2);
   } 
  else if (days <= 10)
   {
    printf("Fine: ?%d", (5 * 2) + ((days - 5) * 4));
  }
   else if (days <= 30)
    {
    printf("Fine: ?%d", (5 * 2) + (5 * 4) + ((days - 10) * 6));
  } 
  else
   {
    printf("Membership Cancelled");
  }
  return 0;
}