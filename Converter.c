#include <stdio.h>
 
int main(){
    char character;
    scanf("%c", &character);
    if (character >= 65 && character <= 90){
        printf("%c", character+32);
    }else if (character >= 97 && character <= 122){
        printf("%c", character-32);
    }else{
        printf("error");
    }
    return 0;
}