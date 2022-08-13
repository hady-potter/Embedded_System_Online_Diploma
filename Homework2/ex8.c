// EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using 
//switch…case

#include <stdio.h>

int main(){

  char operator;
  float a, b;
  printf("Operator: ");
  scanf("%c", &operator);
  printf("Number: ");
  scanf("%f", &a);
  printf("Number: ");
  scanf("%f", &b);

  switch (operator)
  {
  case '+':
    printf("%f + %f = %f\n", a, b, a + b);
    break;
  case '-':
    printf("%f - %f = %f\n", a, b, a - b);
    break;
  case '*':
    printf("%f * %f = %f\n", a, b, a * b);
    break;
  case '/':
    printf("%f / %f = %f\n", a, b, a / b);
    break;
  
  default:
    printf("ERROR! wrong operation!\n");
    break;
  }




  return 0;
}