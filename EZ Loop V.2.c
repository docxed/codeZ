#include <stdio.h>
 
int main(){
  int n, status=1;
  while (status) {
    scanf("%d", &n);
    if (n % 2 != 0) {
      printf("error\n");
    } else if (n % 2 == 0 && n < 2) {
      printf("error\n");
    } else if (n % 2 == 0) {
      for (int i=1; i<=n/2; ++i) {
        printf("%d", i);
      }
      for (int i=n/2; i>=1; --i) {
        printf("%d", i);
      }
      --status;
    }
  }
  return 0;
}