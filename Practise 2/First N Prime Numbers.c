#include <stdio.h>

int main()
{
    int n, count = 0, num = 2, i, prime;

    printf("Enter N: ");
    scanf("%d", &n);

    for(num = 2; count < n; num++)
    {
        prime = 1;

        for(i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
        {
            printf("%d ", num);
            count++;
        }
    }

    return 0;
}