#include <stdio.h>

int main() {

  int X, Y;
  scanf(" %d %d", &X, &Y);

  float c1, c2, c3, c4, c5;
  c1 = 4.00;
  c2 = 4.50;
  c3 = 5.00;
  c4 = 2.00;
  c5 = 1.50;

  if (X == 1){
    float t1 = c1 * Y;
    printf("Total: R$ %.2f\n", t1);
  } else if (X == 2){
    float t2 = c2 * Y;
    printf("Total: R$ %.2f\n", t2);
  } else if (X == 3){
    float t3 = c3 * Y;
    printf("Total: R$ %.2f\n", t3);
  } else if (X == 4){
    float t4 = c4 * Y;
    printf("Total: R$ %.2f\n", t4);
  } else {
    float t5 = c5 * Y;
    printf("Total: R$ %.2f\n", t5);
  }

  
  return 0;
}
