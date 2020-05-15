#include <stdio.h>
#include <math.h>
 
int main(){
    struct ConeSurface {
        double r;
        double L;
    }cone[2];
    for(int i=0; i<2; ++i){
        scanf("%lf %lf", &cone[i].r, &cone[i].L);
        printf("%.2lf\n", 3.141592654 * cone[i].r * cone[i].L + 3.141592654 * pow(cone[i].r, 2));
    }
 
    return 0;
}