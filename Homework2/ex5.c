// EX5: C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>

int main(){

  char c;
  printf("char: ");
  scanf("%c", &c);

  if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    printf("%c is an alphabet\n", c);
  else printf("%c is NOT alphabet\n", c);

  return 0;
}