#include <stdio.h>

int main() {
    int age;


    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

   
    if (age < 0) {
        printf("Invalid age! Age cannot be negative.\n");
    }
    else if (age <= 5) {
        // 3. Food for children 5 and below
        printf("Food Suggestion: Mashed vegetables or soft fruits.\n");
    }
    else if (age >= 6 && age <= 12) {
        printf("Food Suggestion: Rice, dhal, boiled eggs, or simple meals.\n");
    }
    else if (age >= 13 && age <= 18) {
        // 3. Teenagers
        printf("Food Suggestion: Burgers or pasta.\n");
    }
    else if (age >= 19 && age <= 50) {
        printf("Food Suggestion: Balanced diet, chapati, grilled chicken, salads.\n");
    }
    else if (age >= 51) {
        // 3. Adults 51+
        printf("Food Suggestion: Soup or grilled fish.\n");
    }

    return 0;
}