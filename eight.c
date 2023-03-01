8.WAP that takesemp_id,nameand salary of 10 employees and print therecords of the employeewho has maximum salary.

#include <stdio.h>
struct employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct employee emp[10];
    int i, j;
    struct employee temp;
    for(i = 0; i < 10; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].emp_id);

        printf("Enter employee name: ");
        scanf("%s", emp[i].name);

        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
    }
    for(i = 0; i < 9; i++) {
        for(j = 0; j <10; j++) {
            if(emp[i].salary > emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
    printf("\nRecords of employees sorted by salary in assending order:\n");
    for(i = 0; i < 10; i++) {
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }

    return 0;
}
