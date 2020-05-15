#include <stdio.h>
#include <string.h>
 
int main(){
    struct Student{
        char name[61], surname[61], sex[7], sid[13];
        int age;
        double grade;
    }student;
    scanf("%s %s %s %d %s %lf", student.name, student.surname, student.sex, &student.age, student.sid, &student.grade);
    char pre[5];
    strcmp(student.sex, "Male") == 0 ? strcpy(pre, "Mr") : strcpy(pre, "Miss");
    printf("%s %c %s (%d) ID: %s GPA %.2lf\n", pre, student.name[0], student.surname, student.age, student.sid, student.grade);
 
    return 0;
}