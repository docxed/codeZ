#include <stdio.h>
 
int main(){
  int status=1, fore=1, n, result=0;
  while (status) {
    scanf("%d", &n);
    if (n == 0){
      --status;
    }else {
      result += fore % n;
      fore = n;
    }
 
  }
  printf("%d", result);
  return 0;
}