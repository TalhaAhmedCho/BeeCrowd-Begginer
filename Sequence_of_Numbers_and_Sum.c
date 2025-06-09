#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0) {
            break; // লুপ থামাও
        }

        int start = m < n ? m : n;
        int end = m > n ? m : n;
        int sum = 0;

        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
