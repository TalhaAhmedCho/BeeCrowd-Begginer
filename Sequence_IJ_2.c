#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 1; i <= 9; i += 2) { // I = 1, 3, 5, 7, 9
        for(j = 7; j >= 5; j--) { // J = 7, 6, 5
            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}
