#include <stdio.h>
 
int main(){
  int size, rest;
  scanf("%d", &size);
  for (int i=1; i<=size; ++i) {
    for (int j=size; j>0; --j) {
      if (j-i <= 0) {
        printf("*");
      } else {
        printf(" ");
      }
      rest = j-i;
    }
    for (int k=rest; k<0; ++k) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}