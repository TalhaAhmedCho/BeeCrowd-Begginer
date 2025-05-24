#include <stdio.h>
 
int main() {
 
    double income, tax = 0;
    scanf("%lf", &income);

    if (income <= 2000.00) {
        tax = 0;
    } else if (income <= 3000) {
        tax = (income - 2000) * 8 / 100;
    } else if (income <= 4500) {
        tax = (income - 3000) * 18 / 100 + 80;
    } else {
        tax = (income - 4500) * 28 / 100 + 350;
    }

    if (tax > 0) {
        printf("R$ %.2lf\n", tax);
    } else {
        printf("Isento\n");
    }

    return 0;
}