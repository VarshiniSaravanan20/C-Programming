#include <stdio.h>

int main() {
    char t;
    float base, final;
    int m;
    float service = 0, bill = 0, discount = 0;

    scanf("%c", &t);
    scanf("%f", &base);
    scanf("%d", &m);

    // Service Charge
    if (t == 'B')
        service = 20;
    else if (t == 'L')
        service = 40;
    else if (t == 'D')
        service = 60;

    bill = base + service;

    // Member Discount
    if (m == 1) {
        discount = bill * 0.10;
        bill = bill - discount;
    }

    printf("%.0f", bill);

    return 0;
}