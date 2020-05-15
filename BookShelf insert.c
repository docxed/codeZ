#include <stdio.h>
#include <string.h>

int main(){
  int book, n, flag, amount=0, shift;
  char text[2002];
  scanf("%d %d", &book, &n);
  
  struct books{
    char name[1001], author[1001];
    int counter;
  }books[book], append[n];

  for(int i=0; i<n; ++i){
    scanf(" %[^\n]", text);
    
    flag = 1, shift = 0;
    for(int j=0; j<strlen(text); ++j){
      if(text[j] == ','){
        append[i].name[j] = text[j];
        append[i].name[j+1] = '\0';
        flag = 2;
        continue;
      }
      if(flag == 1){
        append[i].name[j] = text[j];
      }else if(flag == 2){
        append[i].author[shift] = text[j];
        if(j == strlen(text)){
          append[i].author[shift+1] = '\0';
        }
        ++shift;
      }
    }
    
    flag = 0;
    for(int j=0; j<book; ++j){
      if(strcmp(append[i].name, books[j].name) == 0 && strcmp(append[i].author, books[j].author) == 0){
        ++books[j].counter;
        ++flag;
        break;
      }
    }
    if(!flag){
      strcpy(books[amount].name, append[i].name);
      strcpy(books[amount].author, append[i].author);
      books[amount].counter = 1;
      ++amount;
    }
  }
  
  if(book == 0){
    printf("Have no book\n");
  }else{

    for(int i=0; i<book; ++i){
      printf("%d %s%s\n", books[i].counter, books[i].name, books[i].author);
    }
  }

  return 0;
}

