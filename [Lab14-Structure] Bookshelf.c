#include <stdio.h>
#include <string.h>
 
int main() {
  int amount;
  scanf("%d", &amount);
    struct Book {
    char id[10];
    char name[100];
    char author[100];
    }book[amount];
    char find[10];
    scanf("%s", find);
    for(int i=0; i<amount; ++i){
      scanf(" %s %s %s", book[i].id, book[i].name, book[i].author);
    }
    int flag=0;
    for(int i=0; i<amount; ++i){
      if(strcmp(find, book[i].id) == 0){
        printf("%s %s %s\n", book[i].id, book[i].name, book[i].author);
        ++flag;
      }
    }
    if(!flag){
      printf("Not Found");
    }
 
     
 
  return 0;
}