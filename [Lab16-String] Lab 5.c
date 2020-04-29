#include <stdio.h>
#include <string.h>

int main(void) {
  int ca=0, cw=0, cl=0;
  char word[450];
  while(1){
    scanf(" %[^\n]", word);
    if(strcmp(word, ".") == 0) break;
    for(int i=0; i<strlen(word); ++i){
      if(word[i] == ' '){
        continue;
      }else{
        ++ca;
      }
    }
    for(int i=0; i<strlen(word); ++i){
      if(word[i] == ' ') ++cw;
    }
    ++cw;
    ++cl;
  }
  printf("Char = %d, word = %d, line = %d", ca, cw, cl);
  return 0;
}