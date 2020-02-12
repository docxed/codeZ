#include <stdio.h>
 
int main(){
  int number, counter=0;
  scanf("%d", &number);
  while (number > counter || number < counter) {
    printf("%d ", number);
    if (number > 0) {
      --number;
    }else {
      ++number;
    }
  }
  printf("0");
  return 0;
}