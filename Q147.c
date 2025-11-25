/* Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, eRead;
    FILE *fp;

    printf("Enter Employee Details:\n");
    printf("Name: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Salary: ");
    scanf("%f", &e.salary);

    fp = fopen("employee.dat", "wb");   
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored in binary file.\n");

    fp = fopen("employee.dat", "rb");   // binary read mode
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&eRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Output read details
    printf("\nEmployee Details Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           eRead.name, eRead.id, eRead.salary);

    return 0;
}
