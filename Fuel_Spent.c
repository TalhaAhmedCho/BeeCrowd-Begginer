#include <stdio.h>
 
int main() {
 
  int time, speed;
  float distance, fuelSpent;

  scanf("%d", &time);
  scanf("%d", &speed);
  distance = time * speed;
  fuelSpent = distance / 12.0;

  printf("%.3f\n", fuelSpent);
  
  return 0;
}