#include <stdio.h>
  
int edge(){
  for (int i = 0; i < 5; ++i) {
    printf("*");
  }
  printf("\n");
  return 0;
}
  
int cover(){
  for (int i = 0; i < 5; ++i) {
    if (i%2 == 0){
      printf("*");
    } else {
      printf("-");
    }
  }
  printf("\n");
  return 0;
}
  
int main(){
  char text[4];
  scanf("%s", text);
  edge();
  cover();
  printf("*%s*\n", text);
  cover();
  edge();
  return 0;
}