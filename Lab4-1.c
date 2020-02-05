#include <stdio.h>
 
int main(){
    int first_constant, second_constant, result;
    scanf("%d %d", &first_constant, &second_constant);
    if (first_constant == second_constant){
        result = first_constant + second_constant;
        printf("%d + %d = %d", first_constant, second_constant, result);
    }else{
        result = first_constant - second_constant;
        printf("%d - %d = %d", first_constant, second_constant, result);
    }
    return 0;
}