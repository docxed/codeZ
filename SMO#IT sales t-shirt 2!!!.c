#include <stdio.h>
#include <math.h>
 
int main(){
    float old_price, per_discount, amount, pay_by_get, pay_by_per;
    scanf("%f%f%f", &old_price, &per_discount, &amount);
    pay_by_per = (old_price - old_price * (per_discount/100)) * amount; 
    pay_by_get = old_price * (amount - floor(amount/3));
    if (pay_by_per <= pay_by_get){
        printf("Discount %.f%%\n%.2f", per_discount, pay_by_per);
    }else{
        printf("Buy 2 Get 1\n%.2f", pay_by_get);
    }
    return 0;
}