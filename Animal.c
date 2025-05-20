#include <stdio.h>
 
int main() {
 
  char a1[50], a2[50], a3[50];
  scanf("%s %s %s", a1, a2, a3);

  if(a1[0] == 'v' && a2[0] == 'a' && a3[0] == 'c') {
    printf("aguia\n");
  } 
  else if(a1[0] == 'v' && a2[0] == 'a' && a3[0] == 'o') {
    printf("pomba\n");
  } 
  else if(a1[0] == 'v' && a2[0] == 'm' && a3[0] == 'o') {
    printf("homem\n");
  } 
  else if(a1[0] == 'v' && a2[0] == 'm' && a3[0] == 'h') {
    printf("vaca\n");
  } 
  else if(a1[0] == 'i' && a2[0] == 'a' && a3[0] == 'h') {
    printf("sanguessuga\n");
  } 
  else if(a1[0] == 'i' && a2[0] == 'a' && a3[0] == 'o') {
    printf("minhoca\n");
  } 
  else if(a1[0] == 'i' && a2[0] == 'i' && a3[0] == 'h' && a3[2] == 'm') {
    printf("pulga\n");
  } 
  else if(a1[0] == 'i' && a2[0] == 'i' && a3[0] == 'h') {
    printf("lagarta\n");
  }
 
  return 0;
}