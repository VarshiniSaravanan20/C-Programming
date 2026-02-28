#include <stdio.h>

int main() {
    int num, divisor;

    printf("Enter number and divisor: ");
    scanf("%d %d", &num, &divisor);

    if(divisor == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        if(num % divisor == 0)
            printf("Number is divisible.\n");
        else
            printf("Number is NOT divisible.\n");
    }

    return 0;
}