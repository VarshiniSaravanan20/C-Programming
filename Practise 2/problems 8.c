#include <stdio.h>

int main() {
    float a, b, result;
    int choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (choice == 1) {
        result = a + b;
        printf("Result = %.2f", result);
    }
    else if (choice == 2) {
        result = a - b;
        printf("Result = %.2f", result);
    }
    else if (choice == 3) {
        result = a * b;
        printf("Result = %.2f", result);
    }
    else if (choice == 4) {
        if (b != 0)
            result = a / b;
        else {
            printf("Cannot divide by zero");
            return 0;
        }
        printf("Result = %.2f", result);
    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}