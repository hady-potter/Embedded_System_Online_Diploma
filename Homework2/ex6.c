// EX6: C Program to Calculate Sum of Natural Numbers

#include <stdio.h>

int main(){

  int x;
  printf("Number: ");
  scanf("%d", &x);

  printf("sum = %d\n", (x * (x + 1)) / 2);

  return 0;
}