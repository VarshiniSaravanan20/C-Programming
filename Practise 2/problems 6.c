#include <stdio.h>

int main() {
    int hours;
    char gender;
    int salary = 0;

    printf("Enter hours worked: ");
    scanf("%d", &hours);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    if (hours <= 8) {
        if (gender == 'M' || gender == 'm') {
            salary = hours * 80;
        } 
        else if (gender == 'F' || gender == 'f') {
            salary = hours * 60;
        }
        else {
            printf("Invalid gender.");
            return 0;
        }
    } 
    else { 
        int extra = hours - 8;
        if (gender == 'M' || gender == 'm') {
            salary = 8 * 80 + extra * 100;
        } 
        else if (gender == 'F' || gender == 'f') {
            salary = 8 * 60 + extra * 100;
        }
        else {
            printf("Invalid gender.");
            return 0;
        }
    }

    printf("Total Salary = Rs.%d", salary);

    return 0;
}