#include <stdio.h>
 
int main() {
    
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int max = A;
    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }

    printf("%d ", max);
    printf("eh o maior");
 
    return 0;
}