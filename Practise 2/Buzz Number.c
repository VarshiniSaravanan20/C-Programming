#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 7 == 0 || num % 10 == 7)
        printf("It is a Buzz Number.\n");
    else
        printf("It is NOT a Buzz Number.\n");

    return 0;
}