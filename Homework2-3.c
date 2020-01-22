#include <stdio.h>
 
int main(){
    char text[5];
    scanf("%s", text);
    printf("%-81.1s%-81.2s%-81.3s%-81.4s%-81.5s", text, text, text, text, text);
    return 0;
}