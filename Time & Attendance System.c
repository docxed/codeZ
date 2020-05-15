//ss
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
  char name[101];
  double on, off;
  scanf("%s %lf %lf", name, &on, &off);
  if((on >= 7.00 && on <= 8.30) && (off >= 16.00 && off <= 18.00)){
    printf("%s N", name);
  }else if((on >= 8.31 && on <= 9.00) && (off >= 16.00 && off <= 18.00)){
    printf("%s L", name);
  }else if((on >= 9.01 && on <= 12.00) && (off >= 16.00 && off <= 18.00)){
    printf("%s LM", name);
  }else if((on >= 7.00 && on <= 8.30) && (off > 12.00 && off < 16.00)){
    printf("%s LA", name);
  }else if((on >= 8.31 && on <= 9.00) && (off > 12.00 && off < 16.00)){
    printf("%s LA", name);
  }else if((on >= 9.01 && on <= 12.00) && (off > 12.00 && off < 16.00)){
    printf("%s A", name);
  }else{
    printf("%s Error", name);
  }
 
    return 0;
}