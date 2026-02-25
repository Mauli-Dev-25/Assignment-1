#include <stdio.h>

// Structure
struct emp {
    char first[20];
    char last[20];
    double salary;
};

// Initialize
void emp_init(struct emp *e) {
    scanf("%s %s %lf", e->first, e->last, &e->salary);
}

// Set salary
void set_salary(struct emp *e, double sal) {
    e->salary = sal;
}

// Display
void emp_display(struct emp *e) {
    printf("Name: %s %s\n", e->first, e->last);
    printf("Monthly Salary: %.2lf\n", e->salary);
    printf("Yearly Salary: %.2lf\n\n", e->salary * 12);
}

int main() {
    struct emp e1, e2;

    // Input
    emp_init(&e1);
    emp_init(&e2);

    printf("Before 10%% Raise:\n");
    emp_display(&e1);
    emp_display(&e2);

    // 10% raise
    set_salary(&e1, e1.salary * 1.10);
    set_salary(&e2, e2.salary * 1.10);

    printf("After 10%% Raise:\n");
    emp_display(&e1);
    emp_display(&e2);

    return 0;
}