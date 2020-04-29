#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  int count=0;
  char a, word[150];
  scanf("%c %[^\n]", &a, word);
  for(int i=0; i<strlen(word); ++i) word[i] = tolower(word[i]);
  a = tolower(a);
  for(int i=0; i<strlen(word); ++i){
    if(a == word[i]){
      ++count;
    }
  }
  printf("%d", count);
  return 0;
}