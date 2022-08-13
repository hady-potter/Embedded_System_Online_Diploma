// EX7: C Program to Find Factorial of a Number

#include <stdio.h>

int fact(int n){
  if( n == 1 || n == 0) return 1;
  return n * fact(n - 1);
}

int main(){

  int x;
  printf("Number: ");
  scanf("%d", &x);
  if(x < 0) printf("ERROR!!! factorial of NON-POSITIVE numbers doesn't exist.\n");
  else printf("%d! = %d\n", x, fact(x));


  return 0;
}