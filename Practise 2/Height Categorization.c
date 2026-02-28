#include <stdio.h>

int main() {
    float height;
    printf("Enter height in cm: ");
    scanf("%f", &height);

    if(height < 150)
        printf("Short\n");
    else if(height >= 150 && height < 165)
        printf("Average Height\n");
    else if(height >= 165 && height < 180)
        printf("Tall\n");
    else
        printf("Very Tall\n");

    return 0;
}