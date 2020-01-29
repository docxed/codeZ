#include <stdio.h>
int main() {
    double side_a, side_b, total;
    scanf("%lf%lf", &side_a, &side_b);
    total = 2 * (side_a + side_b);
    printf("Perimeter of rectangle = %.4f units", total);
    return 0;
 
}