#include <stdio.h>
 
int main(){
    float score;
    scanf("%f", &score);
    if (score < 0){
      printf("Out of Range");
    }else if (score < 50){
        printf("F");
    }else if(score < 60){
        printf("D");
    }else if(score < 70){
        printf("C");
    }else if(score < 80){
        printf("B");
    }else if(score <= 100){
        printf("A");
    }else{
        printf("Out of Range");
    }
    return 0;
}