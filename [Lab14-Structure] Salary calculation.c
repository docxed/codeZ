#include <stdio.h>
#include <string.h>
 
int main() {
  int amount;
  scanf("%d", &amount);
  struct Record {
    char id[10];
    char name[100];
    double salary;
    double sales;
}person[amount];
for(int i=0;i<amount; ++i){
  scanf(" %s %s %lf %lf", person[i].id, person[i].name, &person[i].salary, &person[i].sales);
}
char find[10];
scanf(" %s", find);
int flag=0;
for(int i=0;i<amount; ++i){
  if(strcmp(find, person[i].id) == 0){
    printf("%s\n%s\n%.lf\n%.2lf\n%.lf\n%.2lf\n", person[i].id, person[i].name, person[i].sales, person[i].sales/100*2, person[i].salary, person[i].salary+(person[i].sales/100*2));
    ++flag;
  }
}
if(!flag){
  printf("ID not found !!!");
}
 
  return 0;
}