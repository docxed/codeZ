#include <stdio.h>
#include <string.h>
 
int main(void) {
  char word[450];
  int flag=1, begin=-1, count=1;
  scanf("%s", word);
  while(flag){
    flag = 0;
    for(int i=0; i<strlen(word); ++i){
      if(word[i] == word[i+1]){
        if(begin == -1) begin = i;
        ++count;
        flag = 1;
      }else if(word[i] != word[i+1] && begin != -1){
        for(int j=0; j<count; ++j){
          word[begin] = '|';
          ++begin;
        }
        begin = -1;
        count = 1;
      }
    }

    if(flag == 1){
      for(int i=0; i<strlen(word); ++i){
        if(word[i] != '|'){
          printf("%c", word[i]);
        }
      }
      int pop=1;
      while(pop){
        pop = 0;
        for(int i=0; i<strlen(word); ++i){
          if(word[i] == '|'){
            pop = 1;
            for(int j=i; j<strlen(word); ++j){
              word[j] = word[j+1];
            }
          }
        }
      }
    printf("\n");
    }
  }
  return 0;
}