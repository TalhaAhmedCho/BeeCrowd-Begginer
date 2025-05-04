#include <stdio.h>
 
int main() {
 
    char name[100];
    double salary, bonus, total_salary;
    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &bonus);
    total_salary = salary + (bonus * 0.15);
    printf("TOTAL = R$ %.2lf\n", total_salary);
 
    return 0;
}