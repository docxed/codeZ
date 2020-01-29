#include <stdio.h>
int main() {
    float price, discount, amount, promo, total;
    scanf("%f%f%f", &price, &discount, &amount);
    promo = price - price * (discount/100);
    total = amount * promo;
    printf("%.2f", total);
}