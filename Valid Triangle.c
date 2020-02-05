#include <stdio.h>
 
int main(){
    int side_a, side_b, side_c;
    scanf("%d%d%d", &side_a, &side_b, &side_c);
    if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a){
        printf("Triangle is valid.");
    }else{
        printf("Triangle is not valid.");
    }
    return 0;
}