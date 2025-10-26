/*Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include <stdio.h>
int main() {
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
  int num1, num2;
  char operator;
  printf("Enter num1 operator num2: ");
  scanf("%d %c %d", &num1, &operator, &num2);
  switch (operator) {
    case '+':
      printf("%d", num1 + num2);
      break;
    case '-':
      printf("%d", num1 - num2);
      break;
    case '*':
      printf("%d", num1 * num2);
      break;
    case '/':
      if (num2 != 0)
        printf("%d", num1 / num2);
      else
        printf("Error: Division by zero");
      break;
    case '%':
      if (num2 != 0)
        printf("%d", num1 % num2);
      else
        printf("Error: Division by zero");
      break;
    default:
      printf("Invalid operator");
  }
  return 0;
}
