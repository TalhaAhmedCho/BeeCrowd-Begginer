#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        float weighted_average = (a * 2 + b * 3 + c * 5) / 10.0;

        printf("%.1f\n", weighted_average);
    }
 
    return 0;
}