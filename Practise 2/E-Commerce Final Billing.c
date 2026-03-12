#include <stdio.h>
int main() {
    int price, dist, coupon;
    float discount_price, final;

    scanf("%d %d %d", &price, &dist, &coupon);

  
    if (coupon == 1) {
        discount_price = price - 50;
    }
    else if (coupon == 2) {
        discount_price = price - (price * 0.10);
    }
    else {
        discount_price = price;
    }

  
    int delivery;
    if (dist <= 5) {
        delivery = 0;
    }
    else if (dist <= 20) {
        delivery = 20;
    }
    else {
        delivery = 50;
    }

    final = discount_price + delivery;

    printf("%.0f\n%.0f", discount_price, final);
    return 0;
}