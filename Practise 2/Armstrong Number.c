#include <stdio.h>

int main()
{
    int num, original, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder * remainder * remainder;
        num = num / 10;
    }

    if(sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }

    return 0;
}