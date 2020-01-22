#include <stdio.h>
 
int main() {
  char first[30], last[30];
  int iden, dd, mm, yy;
  float grade;
  scanf("%s%s", first, last);
  scanf("%d", &iden);
  scanf("%d/%d/%d", &dd, &mm, &yy);
  scanf("%f", &grade);
  printf("Fullname: %s %s\n", first, last);
  printf("ID: %d\n", iden);
  printf("DOB: %02d-%02d-%04d\n", dd, mm, yy);
  printf("GPA: %.2f", grade);
  return 0;
}