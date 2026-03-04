#include <stdio.h>

int main() {
    int pens, notebooks, pencils;
    int totalCost;

    printf("Enter number of pens: ");
    scanf("%d", &pens);

    printf("Enter number of notebooks: ");
    scanf("%d", &notebooks);

    printf("Enter number of pencils: ");
    scanf("%d", &pencils);

    totalCost = (pens * 20) + (notebooks * 70) + (pencils * 9);

    printf("Total amount to be paid: %d units\n", totalCost);

    return 0;
}