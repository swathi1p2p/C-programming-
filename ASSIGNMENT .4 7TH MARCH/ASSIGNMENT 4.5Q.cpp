#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee emp[50];
    float max_salary = -999999.99;  // initialize to a low value

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Accepting details of employees
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Finding employee with highest salary
    for (i = 0; i < n; i++) {
        if (emp[i].salary > max_salary) {
            max_salary = emp[i].salary;
        }
    }

    // Displaying details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    for (i = 0; i < n; i++) {
        if (emp[i].salary == max_salary) {
            printf("Employee number: %d\n", emp[i].eno);
            printf("Employee name: %s\n", emp[i].ename);
            printf("Salary: %.2f\n", emp[i].salary);
            break;
        }
    }

    return 0;
}