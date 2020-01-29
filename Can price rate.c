#include <stdio.h>
#include <math.h>
int main() {
    float price, center, height, v, ratio;
    scanf("%f%f%f", &price, &center, &height);
    v = height * 3.14159265359 * pow((center/2), 2);
    ratio = price / v;
    printf("Volume : %.2fml\n", v);
    printf("Baht/ml : %.4f\n", ratio);
    return 0;
 
}