#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n < 0)
    {
        printf("Invalid Input");
    }
    else if(n >= 1 && n <= 3)
    {
        printf("Login Allowed");
    }
    else if(n >= 4 && n <= 5)
    {
        printf("Warning");
    }
    else // n > 5
    {
        printf("Account Locked");
    }

    return 0;
}