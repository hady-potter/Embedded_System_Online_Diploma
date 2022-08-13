#include <stdio.h>

int main(){
  
  float a, b;
  printf("Number: ");
  scanf("%f", &a);
  printf("Number: ");
  scanf("%f", &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swapping:\na = %f, b = %f\n", a, b);

  return 0;
}