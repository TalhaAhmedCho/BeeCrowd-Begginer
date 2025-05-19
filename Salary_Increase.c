#include <stdio.h>

int main() {

  float salary;
  scanf("%f", &salary);

  float readjst;
  if(salary >= 0.00 && salary <= 400.00){
    readjst = 15;
  } else if(salary >= 400.01 && salary <= 800.00){
    readjst = 12;
  } else if(salary >= 800.01 && salary <= 1200.00){
    readjst = 10;
  } else if(salary >= 1200.01 && salary <= 2000.00){
    readjst = 7;
  } else if(salary > 2000.00){
    readjst = 4;
  }

  float earned = salary * (readjst / 100);
  float new = salary + earned;

  printf("Novo salario: %.2f\n", new);
  printf("Reajuste ganho: %.2f\n", earned);
  printf("Em percentual: %.0f %%\n", readjst);

  return 0;
}
