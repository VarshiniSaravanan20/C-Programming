#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int root = sqrt(num);

    if(root * root == num)
        printf("It is a Perfect Square.\n");
    else
        printf("It is NOT a Perfect Square.\n");

    return 0;
}