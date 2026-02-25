. Assign int to float
Test Case 1 — Output: 10.000000
Test Case 2 — Output: 25.000000
#include <stdio.h>

int main()
{
    int a = 10;
    float b = (float)a;
    printf("%f\n", b);

    int c = 25;
    float d = (float)c;
    printf("%f", d);

    return 0;
}
