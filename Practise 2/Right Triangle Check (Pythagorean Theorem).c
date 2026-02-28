#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter base, height and ladder: ");
    scanf("%f %f %f", &a, &b, &c);

    if(c*c == a*a + b*b)
        printf("Forms a Right Triangle\n");
    else
        printf("Does NOT form a Right Triangle\n");

    return 0;
}