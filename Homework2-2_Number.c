#include <stdio.h>
 
int main(){
    char text[5];
    scanf("%s", text);
    printf("%c%c%c%c%c", text[2], text[3], text[4], text[0], text[1]);
    return 0;
}