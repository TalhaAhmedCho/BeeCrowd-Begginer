#include <stdio.h>
 
int main() {
 
  float num;
  int i, count = 0;
  for(i = 0; i < 6; i++) {
    scanf("%f", &num);
    if (num > 0) {
      count++;
    }
  }
  printf("%d valores positivos\n", count);
 
  return 0;
}