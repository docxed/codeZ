#include <stdio.h>
int main() {
    double fore, back, sums, diff, multiply, divide;
    scanf("%lf,%lf", &fore, &back);
    sums = fore + back;
    diff = fore - back;
    multiply = fore * back;
    divide = fore / back;
    printf("The sum of the given numbers : %lf\n", sums);
    printf("The difference of the given numbers : %lf\n", diff);
    printf("The product of the given numbers : %lf\n", multiply);
    printf("The quotient of the given numbers : %lf\n", divide);
    return 0;
}