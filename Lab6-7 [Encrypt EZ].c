#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
  char code[] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k', 'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z', 'g', 'w', 'i'};
  char raw[200], word;
  int i, j, get_index, encrypt, encrypt_cycling;
  scanf("%[^\n]", raw);
  for (i=0; i<strlen(raw); ++i){
    if(!isalpha(raw[i])){
      printf(" ");
    }else if (isupper(raw[i])){
      word = tolower(raw[i]);
      for (j=0; j<26; ++j){
        if (word == code[j]){
          get_index = j;
          break;
        }
      }
      encrypt = (j-5);
      if (encrypt < 0) encrypt_cycling = 26 + encrypt;
      else encrypt_cycling = encrypt;
      printf("%c", toupper(code[encrypt_cycling]));
    }else{
      word = raw[i];
      for (j=0; j<26; ++j){
        if (word == code[j]){
          get_index = j;
          break;
        }
      }
      encrypt = (j-5);
      if (encrypt < 0) encrypt_cycling = 26 + encrypt;
      else encrypt_cycling = encrypt;
      printf("%c", code[encrypt_cycling]);
    }
  }
 
  return 0;
}