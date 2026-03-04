#include <stdio.h>

int main() {
    int totalChocolates, perDay, days;

    printf("Enter total chocolates: ");
    scanf("%d", &totalChocolates);

    printf("Enter chocolates consumed per day: ");
    scanf("%d", &perDay);

    printf("Enter number of planned days: ");
    scanf("%d", &days);

    if (totalChocolates >= perDay * days) {
        printf("1\n");  // Chocolates will last
    } else {
        printf("0\n");  // Chocolates will run out
    }

    return 0;
}