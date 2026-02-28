#include <stdio.h>

int main() {
    char size, fuel;
    int purpose;

    printf("Enter vehicle size (S/M/L): ");
    scanf(" %c", &size);

    printf("Enter fuel type (G/D/E): ");
    scanf(" %c", &fuel);

    printf("Enter purpose (1-Commercial, 2-Public, 3-Personal): ");
    scanf("%d", &purpose);

    if((size=='S'||size=='M'||size=='L') &&
       (fuel=='G'||fuel=='D'||fuel=='E') &&
       (purpose>=1 && purpose<=3)) {

        printf("Vehicle Details:\n");

        if(size=='S') printf("Small Size\n");
        else if(size=='M') printf("Medium Size\n");
        else printf("Large Size\n");

        if(fuel=='G') printf("Gasoline\n");
        else if(fuel=='D') printf("Diesel\n");
        else printf("Electric\n");

        if(purpose==1) printf("Commercial Use\n");
        else if(purpose==2) printf("Public Transport\n");
        else printf("Personal Use\n");

    } else {
        printf("Invalid Input\n");
    }

    return 0;
}