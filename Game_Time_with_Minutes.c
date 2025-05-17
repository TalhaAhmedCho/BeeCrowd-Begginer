#include <stdio.h>
 
int main() {
 
  int h1, m1, h2, m2, t1, t2;
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

  t1 = h1 * 60 + m1;
  t2 = h2 * 60 + m2;

  if (t1 < t2) {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (t2 - t1) / 60, (t2 - t1) % 60);
  } else if (t1 > t2) {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ((24 * 60 - t1) + t2) / 60, ((24 * 60 - t1) + t2) % 60);
  } else {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  }
 
  return 0;
}