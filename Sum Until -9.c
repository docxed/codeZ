#include <stdio.h>
 
int main(){
  int value, status=1, product_of_sum=0;
  while (status) {
    scanf("%d", &value);
    if (value == -9){
      --status;
    } else {
      product_of_sum += value;
    }
  }
  printf("%d", product_of_sum);
  return 0;
}