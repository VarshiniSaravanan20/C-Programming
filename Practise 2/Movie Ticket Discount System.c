#include <stdio.h>
int main() {
    int age, price;
    float final;

    scanf("%d %d", &age, &price);

    if (age < 12) {
        final = price * 0.5;
    }
    else if (age >= 60) {
        final = price * 0.7;
    }
    else {
        final = price;
    }

    printf("%.0f", final);
    return 0;
}