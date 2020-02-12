#include <stdio.h>
 
int main(){
  int counter=0, age, height, weight, phase_1=0, phase_2=0, phase_3=0, phase_4=0, avg_age=0;
  float avg_height=0, avg_weight=0;
  while (counter < 50) {
    scanf("%d %d %d", &age, &height, &weight);
    if (age >= 20 && height >= 160) {
      ++phase_1;
    }
    if (age < 20 && (height <= 180 || weight >= 60)) {
      ++phase_2;
    }
    if (age >= 30 && (weight >= 40 && weight <= 80)) {
      ++phase_3;
    }
    if (age < 40 && (weight < 85 || height <= 200)) {
      ++phase_4;
    }
    avg_age += age;
    avg_height += height;
    avg_weight += weight;
    ++counter;
  }
  printf("Age >= 20 and Height >= 160: %d\n", phase_1);
  printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", phase_2);
  printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", phase_3);
  printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", phase_4);
  printf("Average Age: %d\n", avg_age/50);
  printf("Average Height: %.2f\n", avg_height/50);
  printf("Average Weight: %.2f\n", avg_weight/50);
  return 0;
}