#include <stdio.h>
 
int main() {
    float n, sum = 0.0;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        if (n > 0) {
            count++;
            sum += n;
        }
    }

    printf("%d valores positivos\n", count);
    if (count > 0)
        printf("%.1f\n", sum / count);

    return 0;
}
