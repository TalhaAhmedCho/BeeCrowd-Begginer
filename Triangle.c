#include <stdio.h>
 
int main() {
 
  float A, B, C;
  scanf("%f %f %f", &A, &B, &C);

  if (A + B > C && A + C > B && B + C > A) {
    float parameter = A + B + C;
    printf("Perimetro = %.1f\n", parameter);
  } else {
    float area = (A + B) * C / 2;
    printf("Area = %.1f\n", area);
  }
 
  return 0;
}