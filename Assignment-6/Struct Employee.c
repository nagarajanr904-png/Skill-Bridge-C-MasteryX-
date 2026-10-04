#include <stdio.h>

struct Employee {
    char id[100];
    char name[100];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter employee id: ");
    scanf("%s", e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details\n");
    printf("Id: %s\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}