#include <stdio.h>

int main() {

  float num[4], C, B, A;
  scanf(" %f %f %f", &num[0], &num[1], &num[2]);

  if(num[0] > num[1] && num[0] > num[2] && num[1] > num[2]){
    A = num[0];
    B = num[1];
    C = num[2];
  } else if(num[1] > num[0] && num[1] > num[2] && num[0] > num[2]){
    A = num[1];
    B = num[0];
    C = num[2];
  } else{
    A = num[2];
    B = num[0];
    C = num[1];
  }

  if(A >= (B + C)){
    printf("NAO FORMA TRIANGULO\n");
  } else{
    if(A*A == B*B + C*C){
        printf("TRIANGULO RETANGULO\n");
    } else if(A*A > B*B + C*C){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(A*A < B*B + C*C){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    } else if(A == B || B == C || A == C){
        printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}
