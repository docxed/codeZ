#include <stdio.h>
#include <math.h>
int main() {
    double side_a, side_b, side_c;
    scanf("%lf%lf", &side_a, &side_b);
    side_c = pow(side_a, 2) + pow(side_b, 2);
    side_c = sqrt(side_c);
    printf("%.2f", side_c);
    return 0;
}