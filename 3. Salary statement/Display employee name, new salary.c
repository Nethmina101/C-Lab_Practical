#include <stdio.h>

int main() {
    char employeeName[100];
    float basicSalary, newSalary, increment;
    printf("Enter employee name: ");
    scanf("%[^\n]",&employeeName);
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    if (basicSalary < 5000) {
        increment = 0.05 * basicSalary;
    } else if (basicSalary >= 5000 && basicSalary < 10000) {
        increment = 0.10 * basicSalary;
    } else {
        increment = 0.15 * basicSalary;
    }
    newSalary = basicSalary + increment;
    printf("Employee Name: %s\n", employeeName);
    printf("New Salary: %.2f\n", newSalary);

    return 0;
}
