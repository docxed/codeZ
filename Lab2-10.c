#include <stdio.h>
 
int main(){
    char aa, bb, cc, dd, ee;
    scanf("%c %c %c %c %c", &aa, &bb, &cc, &dd, &ee);
    printf("%c\n%c\n%c\n%c\n%c", aa+1, bb, cc+1, dd, ee+1);
    return 0;
}