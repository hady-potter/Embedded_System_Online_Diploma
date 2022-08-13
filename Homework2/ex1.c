// EX1: Write C Program to Check Whether a Number is Even or Odd

#include <stdio.h>

int main(){

  int x = 0;
  printf("Number: ");
  scanf("%d", &x);
  if(x & 1) printf("%d is odd\n", x);
  else printf("%d is even\n", x);

  return 0;
}