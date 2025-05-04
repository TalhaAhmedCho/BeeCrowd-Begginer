#include <stdio.h>
 
int main() {
 
    int distance;
    float fuel;
    scanf("%d", &distance);
    scanf("%f", &fuel);

    float consumption = distance / fuel;
    printf("%.3f km/l\n", consumption);
 
    return 0;
}