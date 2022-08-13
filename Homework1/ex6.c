#include <stdio.h>

int main(){
  
  float a, b;
  printf("Number: ");
  scanf("%f", &a);
  printf("Number: ");
  scanf("%f", &b);
  float tmp = a;
  a = b;
  b = tmp;
  printf("After swapping:\na = %f, b = %f\n", a, b);

  return 0;
}