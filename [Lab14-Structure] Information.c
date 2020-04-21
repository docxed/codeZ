#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 20
   
int main() {
  struct student{
    char firstname[60], lastname[60], sex[10], id[12];
    int age;
    float grade;
  }stud[N], keep;
  for(int i=0; i<N; ++i){
    scanf(" %s %s %s %d %s %f", stud[i].firstname, stud[i].lastname, stud[i].sex, &stud[i].age, stud[i].id, &stud[i].grade);
  }
  char sord[15];
  scanf("%s", sord);
  for(int i=0;sord[i]; ++i){
    sord[i] = tolower(sord[i]);
  }
  if(strcmp(sord, "name") == 0){
    for(int i=1; i<N; ++i){
      for(int j=0; j<N-i; ++j){
        if(strcmp(stud[j].firstname, stud[j+1].firstname) > 0){
          keep = stud[j];
          stud[j] = stud[j+1];
          stud[j+1] = keep;
        }
      }
    }
    char pre[5];
    for(int i=0; i<N; ++i){
      if(strcmp(stud[i].sex, "Male") == 0){
        strcpy(pre, "Mr");
      }else{
        strcpy(pre, "Miss");
      }
      printf("%s %c %s (%d) ID: %s GPA %.2f\n", pre, stud[i].firstname[0], stud[i].lastname, stud[i].age, stud[i].id, stud[i].grade);
    }
  }else if(strcmp(sord, "surname") == 0){
    for(int i=1; i<N; ++i){
      for(int j=0; j<N-i; ++j){
        if(strcmp(stud[j].lastname, stud[j+1].lastname) > 0){
          keep = stud[j];
          stud[j] = stud[j+1];
          stud[j+1] = keep;
        }
      }
    }
    char pre[5];
    for(int i=0; i<N; ++i){
      if(strcmp(stud[i].sex, "Male") == 0){
        strcpy(pre, "Mr");
      }else{
        strcpy(pre, "Miss");
      }
      printf("%s %c %s (%d) ID: %s GPA %.2f\n", pre, stud[i].firstname[0], stud[i].lastname, stud[i].age, stud[i].id, stud[i].grade);
    }
  }else if(strcmp(sord, "id") == 0){
    for(int i=1; i<N; ++i){
      for(int j=0; j<N-i; ++j){
        if(strcmp(stud[j].id, stud[j+1].id) > 0){
          keep = stud[j];
          stud[j] = stud[j+1];
          stud[j+1] = keep;
        }
      }
    }
    char pre[5];
    for(int i=0; i<N; ++i){
      if(strcmp(stud[i].sex, "Male") == 0){
        strcpy(pre, "Mr");
      }else{
        strcpy(pre, "Miss");
      }
      printf("%s %c %s (%d) ID: %s GPA %.2f\n", pre, stud[i].firstname[0], stud[i].lastname, stud[i].age, stud[i].id, stud[i].grade);
    }
  }
   
  return 0;
}