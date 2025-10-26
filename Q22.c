/*Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
    float cp, sp, profit, loss, percentage;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    
    if(sp > cp)
	 {
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit %.2f%%", percentage);
    } 
	else if(cp > sp)
	 {
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss %.2f%%", percentage);
    } 
	else 
	{
        printf("No Profit No Loss");
    }
    
    return 0;
}
