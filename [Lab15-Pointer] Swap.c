#include <stdio.h>

void swap(double *a, double *b);

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  swap(&a, &b);
  swap(&a, &c);
  printf("%.2lf %.2lf %.2lf", a, b, c);
  return 0;
}

void swap(double *a, double *b) {
  double temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return;
}