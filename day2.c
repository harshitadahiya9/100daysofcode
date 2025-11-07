#include <stdio.h>

int main() {
    int choice;
    printf("------ 100 Days of Code: Day 2 ------\n");
    printf("1. Calculate Area & Perimeter of Rectangle\n");
    printf("2. Calculate Area & Circumference of Circle\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float length, breadth, area, perimeter;
        printf("\nEnter length of rectangle: ");
        scanf("%f", &length);
        printf("Enter breadth of rectangle: ");
        scanf("%f", &breadth);

        area = length * breadth;
        perimeter = 2 * (length + breadth);

        printf("\n📏 Rectangle Results:\n");
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
    }
    else if (choice == 2) {
        float radius, area, circumference;
        printf("\nEnter radius of circle: ");
        scanf("%f", &radius);

        area = PI * radius * radius;
        circumference = 2 * PI * radius;

        printf("\n Circle Results:\n");
        printf("Area = %.2f\n", area);
        printf("Circumference = %.2f\n", circumference);
    }
    else {
        printf("\nInvalid choice! Please run again and enter 1 or 2.\n");
    }

    return 0;
}
