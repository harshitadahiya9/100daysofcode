#include <stdio.h>

void q1() {
    int a, b;
    printf("\n🖥️ Q1: Sum of two numbers\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum = %d\n", a + b);
}

void q2() {
    float num1, num2;
    printf("\n🖥️ Q2: Sum, Difference, Product, Quotient\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);

    if (num2 != 0)
        printf("Quotient = %.2f\n", num1 / num2);
    else
        printf("Cannot divide by zero!\n");
}

int main() {
    int choice;
    printf("Choose a question to run:\n");
    printf("1. Q1 - Sum of two numbers\n");
    printf("2. Q2 - Sum, Difference, Product, Quotient\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
        q1();
    else if (choice == 2)
        q2();
    else
        printf("Invalid choice!\n");

    return 0;
}#include <stdio.h>

void q1() {
    int a, b;
    printf("\n🖥️ Q1: Sum of two numbers\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum = %d\n", a + b);
}

void q2() {
    float num1, num2;
    printf("\n🖥️ Q2: Sum, Difference, Product, Quotient\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);

    if (num2 != 0)
        printf("Quotient = %.2f\n", num1 / num2);
    else
        printf("Cannot divide by zero!\n");
}

int main() {
    int choice;
    printf("Choose a question to run:\n");
    printf("1. Q1 - Sum of two numbers\n");
    printf("2. Q2 - Sum, Difference, Product, Quotient\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
        q1();
    else if (choice == 2)
        q2();
    else
        printf("Invalid choice!\n");

    return 0;
}
