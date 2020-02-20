#include <stdio.h>
 
int main(){
  int m[8]={2, 20, 8, 10, 4, 6, 16, 18}, n[7]={1, 3, 9, 7, 11, 15, 19}, stage=0, input, i, j;
  while (1){
    scanf("%d", &input);
    if (input >= 1 && input <= 20){
      for (i=0; i<8; ++i){
        if (input == m[i]){printf("%d is in M at index [%d]", input, i); ++stage; break;}
      }
      for (j=0; j<7; ++j){
        if (input == n[j]){printf("%d is in N at index [%d]", input, j); ++stage; break;}
      }
      if (stage) break;
      else printf("%d is not in neither M nor N", input); break;
    }
  }
  return 0;
}