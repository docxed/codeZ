#include <stdio.h>
 
int main(){
  int number, counter=1;
  scanf("%d", &number);
  while (counter <= number) {
    printf("%d ", counter);
    ++counter;
  }
  return 0;
}