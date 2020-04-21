#include <stdio.h>
#include <string.h>
 
int main() {
  int amount;
  scanf("%d", &amount);
    struct Person {
    char firstName[100];
    char lastName[100];
    int age;
    char gender[7]; // {Man,Woman}
    } person[amount];
    for(int i=0; i<amount; ++i){
      scanf(" %s %s %d %s", person[i].firstName, person[i].lastName, &person[i].age, person[i].gender);
    }
    char find[7];
    scanf("%s", find);
    int flag=0;
    for(int i=0; i<amount; ++i){
      if(strcmp(find, person[i].gender) == 0){
        printf("%s %s %d %s\n", person[i].firstName, person[i].lastName, person[i].age, person[i].gender);
        ++flag;
      }
    }
    if(!flag){
      printf("error");
    }    
 
  return 0;
}