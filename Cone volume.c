#include <stdio.h>
#include <math.h>
 
int main(){
    struct Cone {
        double r;
        double h;
    }cone[2];
    for(int i=0; i<2; ++i){
        scanf("%lf %lf", &cone[i].r, &cone[i].h);
        printf("%.2lf\n", (double)1/3 * 3.141592654 * pow(cone[i].r, 2) * cone[i].h);
    }
 
    return 0;
}