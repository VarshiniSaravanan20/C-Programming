#include <stdio.h>

int main() {
    int age;

    printf("Please enter your age: ");

    // Check if input is a valid number
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    // Check for negative age
    if (age < 0) {
        printf("Invalid age. Age cannot be negative.\n");
    }
    else if (age <= 5) {
        printf("Recommended food: Mashed vegetables or soft fruits.\n");
    }
    else if (age <= 12) {
        printf("Recommended food: Rice, eggs, and milk.\n");
    }
    else if (age <= 18) {
        printf("Recommended food: Burgers or pasta.\n");
    }
    else if (age <= 50) {
        printf("Recommended food: Grilled chicken, vegetables, or rice.\n");
    }
    else {
        printf("Recommended food: Soup or grilled fish.\n");
    }

    return 0;
}