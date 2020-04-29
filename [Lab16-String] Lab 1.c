#include <stdio.h>
#include <string.h>

int main(void) {
  char word[150], a;
  scanf("%[^\n]", word);
  int round = strlen(word);
  for(int i=0; i<round; ++i){
    a = word[i];
    if(a != 32){
      printf("%c", a);
    }
  }
  return 0;
}