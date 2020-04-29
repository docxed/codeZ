#include <stdio.h>
#include <string.h>

int main(void) {
  int wak, l1, l2, lwak;
  char w1[50], w2[40];
  scanf("%d %[^\n] %[^\n]", &wak, w1, w2);
  l1 = strlen(w1);
  l2 = strlen(w2);
  lwak = wak-2;
  for(int i=0; i<wak; ++i) printf("*");
  printf("\n");
  printf("*");
  if((lwak - l1) % 2 != 0){
    for(int i=0; i<((lwak-l1)/2)+1; ++i) printf(" ");
    printf("%s", w1);
    for(int i=0; i<((lwak-l1)/2); ++i) printf(" ");
  }else{
    for(int i=0; i<((lwak-l1)/2); ++i) printf(" ");
    printf("%s", w1);
    for(int i=0; i<((lwak-l1)/2); ++i) printf(" ");
  }
  printf("*\n");
  printf("*");
  if((lwak - l2) % 2 != 0){
    for(int i=0; i<((lwak-l2)/2)+1; ++i) printf(" ");
    printf("%s", w2);
    for(int i=0; i<((lwak-l2)/2); ++i) printf(" ");
  }else{
    for(int i=0; i<((lwak-l2)/2); ++i) printf(" ");
    printf("%s", w2);
    for(int i=0; i<((lwak-l2)/2); ++i) printf(" ");
  }
  printf("*\n");
  for(int i=0; i<wak; ++i) printf("*");
  return 0;
}