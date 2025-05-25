#include <stdio.h>

int main(){

  int day1, hour1, minute1, second1;
  int day2, hour2, minute2, second2;
  char dia[5];

  scanf("%s %d", dia, &day1);
  scanf("%d : %d : %d", &hour1, &minute1, &second1);
  scanf("%s %d", dia, &day2);
  scanf("%d : %d : %d", &hour2, &minute2, &second2);

  int total_seconds1 = day1 * 86400 + hour1 * 3600 + minute1 * 60 + second1;
  int total_seconds2 = day2 * 86400 + hour2 * 3600 + minute2 * 60 + second2;

  int duration = total_seconds2 - total_seconds1;

  int days = duration / 86400;
  duration %= 86400;
  int hours = duration / 3600;
  duration %= 3600;
  int minutes = duration / 60;
  int seconds = duration % 60;

  printf("%d dia(s)\n", days);
  printf("%d hora(s)\n", hours);
  printf("%d minuto(s)\n", minutes);
  printf("%d segundo(s)\n", seconds);

  return 0;
}