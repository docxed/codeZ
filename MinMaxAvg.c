#include <stdio.h>
 
int main(){
  int n, counter=0;
  double value, mins, maxs, avg;
  scanf("%d", &n);
  while (counter < n){
    scanf("%lf", &value);
    if (counter > 0) {
      if (value < mins) {
        mins = value;
      }
      if (value > maxs) {
        maxs = value;
      }
      avg += value;
    } else {
      mins = value;
      maxs = value;
      avg = value;
    }
    ++counter;
  }
  printf("%d Values\n", n);
  printf("Min: %.3lf\n", mins);
  printf("Max: %.3lf\n", maxs);
  printf("Avg: %.2lf\n", avg/n);
  return 0;
}