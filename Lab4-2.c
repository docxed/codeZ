#include <stdio.h>
 
int main(){
    double a, b, c, keeper;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > b){
        keeper = b;
        b = a;
        a = keeper;
    }
    if (b > c){
        keeper = c;
        c = b;
        b = keeper;
    }
    if (a > b){
        keeper = b;
        b = a;
        a = keeper;
    }
    printf("%.2lf", b);
    return 0;
}