#include <stdio.h>

int main(){
  
  float x = 0, y = 0;
  printf("Number: ");
  scanf("%f", &x);
  printf("Number: ");
  scanf("%f", &y);
  printf("Product: %f\n", x * y);
  return 0;
}