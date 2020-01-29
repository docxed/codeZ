#include <stdio.h>
int main() {
    float a, b ,c ,d, total, avg;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    total = a + b + c + d;
    avg = total / 4;
    printf("Summation is %.2f\n", total);
    printf("Average is %.3f\n", avg);
    return 0;
}