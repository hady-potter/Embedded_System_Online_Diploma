// EX4: C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>

int main(){
  float a;
  printf("Number: ");
  scanf("%f", &a);
  if(a > 0) printf("%f is positive\n", a);
  else if(a < 0) printf("%f is negative\n", a);
  else printf("You entered Zero\n");


  return 0;
}