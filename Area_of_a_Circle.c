#include <stdio.h>

int main() {
  double R;
  double n = 3.14159;

  scanf("%lf", &R);
  double area = n * R * R ;
  printf("A=%.4lf\n", area);
  return 0;
}