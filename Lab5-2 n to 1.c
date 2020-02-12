#include <stdio.h>
 
int main(){
  int number, counter=0;
  scanf("%d", &number);
  do {
    printf("%d ", number);
    --number;
  } while(number > counter);
  return 0;
}