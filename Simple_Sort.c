#include <stdio.h>
 
int main() {
 
  int n1, n2, n3, low, mid, high;
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 > n2 && n1 > n3 ) {
    if (n2 > n3) {
      high = n1;
      mid = n2;
      low = n3;
    } else {
      high = n1;
      mid = n3;
      low = n2;
    }
  } else if (n2 > n1 && n2 > n3) {
    if (n1 > n3) {
      high = n2;
      mid = n1;
      low = n3;
    } else {
      high = n2;
      mid = n3;
      low = n1;
    }
  } else {
    if (n1 > n2) {
      high = n3;
      mid = n1;
      low = n2;
    } else {
      high = n3;
      mid = n2;
      low = n1;
    }
  }

  printf("%d\n%d\n%d\n\n", low, mid, high);
  printf("%d\n%d\n%d\n", n1, n2, n3);
  return 0;
}