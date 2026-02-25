. Store char in int (ASCII Value)
Test Case 1 — Output: 65  (ASCII of 'A')
Test Case 2 — Output: 97  (ASCII of 'a')
#include <stdio.h>

int main()
{
    int a = 'A';
    int b = 'a';

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}
