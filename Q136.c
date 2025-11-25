/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>


enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");

    char choice[10];
    int num1, num2;
    enum Menu operation;

   
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) and two numbers: ");
    scanf("%s %d %d", choice, &num1, &num2);

    
    if (strcmp(choice, "ADD") == 0) operation = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0) operation = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0) operation = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 1;
    }

   
    switch (operation) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
    }

    return 0;
}
