#include <stdio.h>

int main() {
    int choice;
    float radius, height, baseArea, volume;

    printf("Select Shape:\n");
    printf("1. Cone\n2. Pyramid\n3. Prism\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius and height: ");
            scanf("%f %f", &radius, &height);
            volume = (1.0/3.0) * 3.14159 * radius * radius * height;
            printf("Volume of Cone: %.2f\n", volume);
            break;

        case 2:
            printf("Enter base area and height: ");
            scanf("%f %f", &baseArea, &height);
            volume = (1.0/3.0) * baseArea * height;
            printf("Volume of Pyramid: %.2f\n", volume);
            break;

        case 3:
            printf("Enter base area and height: ");
            scanf("%f %f", &baseArea, &height);
            volume = baseArea * height;
            printf("Volume of Prism: %.2f\n", volume);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}