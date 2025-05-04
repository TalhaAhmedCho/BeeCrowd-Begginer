#include <stdio.h>
 
int main() {
 
    double employee_number, hours_worked, hourly_rate, salary;
    scanf("%lf", &employee_number);
    scanf("%lf", &hours_worked);
    scanf("%lf", &hourly_rate);
    salary = hours_worked * hourly_rate;
    printf("NUMBER = %.0lf\n", employee_number);
    printf("SALARY = U$ %.2lf\n", salary);
 
    return 0;
}