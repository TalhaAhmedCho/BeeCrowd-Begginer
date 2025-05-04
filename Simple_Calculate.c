#include <stdio.h>
 
int main() {
 
    float code1, unit1, price1, code2, unit2, price2, total;
    scanf("%f %f %f", &code1, &unit1, &price1);
    scanf("%f %f %f", &code2, &unit2, &price2);
    total = (unit1 * price1) + (unit2 * price2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
 
    return 0;
}