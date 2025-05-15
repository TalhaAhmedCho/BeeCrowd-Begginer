#include <stdio.h>
 
int main() {
 
  int time1, time2, dif1, dif2, final;
  scanf("%d %d", &time1, &time2);

  if (time1 > time2) {
    dif1 = 24 - time1;
    dif2 = time2;
    final = dif1 + dif2;
    printf("O JOGO DUROU %d HORA(S)\n", final);
  } else if (time1 < time2) {
    final = time2 - time1;
    printf("O JOGO DUROU %d HORA(S)\n", final);
  } else if (time1 == time2) {
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
 
  return 0;
}