#include <stdio.h>
 
int main(){
  int m, n;
  scanf("%d %d", &m, &n);
  if (m == n){
    printf("%d", m);
  } else if (m >= n){
    while (m >= n) {
      printf("%d ", m);
      --m;
    }
  } else if (n >= m) {
    while (n >= m) {
      printf("%d ", m);
      ++m;
    }
  }
  return 0;
}