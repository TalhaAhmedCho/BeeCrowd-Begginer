#include <stdio.h>
 
int main() {
 
  int hr, min, sec;
  scanf("%d", &sec);

  hr = sec / 3600;
  min = (sec % 3600) / 60;
  sec = sec % 60;
  
  printf("%d:%d:%d\n", hr, min, sec);
 
  return 0;
}