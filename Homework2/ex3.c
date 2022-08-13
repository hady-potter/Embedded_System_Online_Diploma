// EX3:C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>
#include <math.h>

float max(float a, float b){
  return (a > b) ? a : b;
}

int main(){

  float a, b , c;
  printf("Number: ");
  scanf("%f", &a);
  printf("Number: ");
  scanf("%f", &b);
  printf("Number: ");
  scanf("%f", &c);

  float _max = max(a, max(b, c));
  printf("Lagrest Number: %f\n", _max);

  return 0;
}