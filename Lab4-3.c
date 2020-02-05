#include <stdio.h>
#include <ctype.h>
 
int main(){
    char grade;
    scanf("%c", &grade);
    grade = toupper(grade);
    switch (grade){
      case 65:
      printf("Genius");
      break;
      case 66:
      printf("Good");
      break;
      case 67:
      printf("Try Harder");
      break;
      case 68:
      printf("Very Bad");
      break;
      case 70:
      printf("Fail");
      break;
      default:
      printf("Invalid Input");
    }
    return 0;
}