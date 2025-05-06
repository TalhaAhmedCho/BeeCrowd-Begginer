#include <stdio.h>
#include <math.h>

int main() {

  float A, B, C;
  scanf(" %f %f %f", &A, &B, &C);
  float delta = pow(B, 2) - 4 * A * C;

  if (A != 0 && delta >= 0){
    float R1 = (-B + sqrt(delta)) / (2 * A);
    printf("R1 = %.5f\n", R1);
    float R2 = (-B - sqrt(delta)) / (2 * A);
    printf("R2 = %.5f\n", R2);
  }
  else {
    printf("Impossivel calcular\n");
  }

  return 0;
}
