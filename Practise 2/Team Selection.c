#include <stdio.h>

int main() {
    int age;
    char gender;
    float height;

    printf("Enter age, gender (M/F), height (in metres): ");
    scanf("%d %c %f", &age, &gender, &height);

    if(height >= 1.80 || (gender == 'M' && age >= 18))
        printf("Selected\n");
    else
        printf("Not Selected\n");

    return 0;
}