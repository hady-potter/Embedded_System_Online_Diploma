// EX2: C Program to Check Vowel or Consonant

#include <stdio.h>

typedef enum {false, true} bool;

int main(){

  char vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
  char c;
  printf("char: ");
  scanf("%c", &c);

  bool flag = false;
  for(int i = 0; i < 10; i++){
    if(c == vowels[i])
      flag = true;
  }

  if(flag) printf("%c is vowel\n", c);
  else printf("%c is const\n", c);



  return 0;
}