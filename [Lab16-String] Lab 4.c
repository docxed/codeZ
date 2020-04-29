#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int cw=1, ca=0;
  char word[150];
  scanf("%[^\n]", word);
  for(int i=0;i<strlen(word); ++i) word[i] = tolower(word[i]);
  for(int i=0;i<strlen(word); ++i){
    if(word[i] == ' '){
      ++cw;
    }
  }
  printf("%d words\n----\n", cw);
  int begin = 0;
  for(int i=0;i<cw; ++i){
    while(1){
      if (word[begin] == ' ' || begin == strlen(word)) break;
      printf("%c", word[begin]);
      ++begin;
      ++ca;
    }
    printf(" : %d\n", ca);
    ca = 0;
    ++begin;
  }
  return 0;
}