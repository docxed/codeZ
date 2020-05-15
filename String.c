#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char first_text[1001], second_text[1001], third_text[1001], search[1001];
    scanf(" %[^\n]", first_text);
    scanf(" %[^\n]", second_text);
    scanf(" %[^\n]", third_text);
    scanf(" %[^\n]", search);
    for(int i=0; i<strlen(first_text); ++i) first_text[i] = tolower(first_text[i]);
    for(int i=0; i<strlen(second_text); ++i) second_text[i] = tolower(second_text[i]);
    for(int i=0; i<strlen(third_text); ++i) third_text[i] = tolower(third_text[i]);
    for(int i=0; i<strlen(search); ++i) search[i] = tolower(search[i]);


    int lenght = strlen(search), shift=0, count=0, temp=0;
    char block[lenght+1];

    while(1){
      if(first_text[shift] == '\0') break;
      temp = shift;
      for (int i=0; i<lenght; ++i){
        if(first_text[temp] == ' ') continue;
        block[i] = first_text[temp];
        ++temp;
      }
      if(strcmp(search, block) == 0){
        ++count;
        break;
      }

      ++shift;
    }

    shift = temp = 0;

    while(1){
      if(second_text[shift] == '\0') break;
      temp = shift;
      for (int i=0; i<lenght; ++i){
        if(second_text[temp] == ' ') continue;
        block[i] = second_text[temp];
        ++temp;
      }
      if(strcmp(search, block) == 0){
        ++count;
        break;
      }
      ++shift;
    }

    shift = temp = 0;

    while(1){
      if(third_text[shift] == '\0') break;
      temp = shift;
      for (int i=0; i<lenght; ++i){
        if(third_text[temp] == ' ') continue;
        block[i] = third_text[temp];
        ++temp;
      }
      if(strcmp(search, block) == 0){
        ++count;
        break;
      }
      ++shift;
    }

    printf("%d\n", count);

    return 0;
}