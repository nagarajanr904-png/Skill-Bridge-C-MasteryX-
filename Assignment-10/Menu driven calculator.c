#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    return (float)a / b;
}
int modulus(int a, int b)
{
    return a % b;
}
int main()
{
    int a, b, choice;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    switch (choice)
    {
        case 1:
            printf("Addition = %d", add(a, b));
            break;
        case 2:
            printf("Subtraction = %d", subtract(a, b));
            break;
        case 3:
            printf("Multiplication = %d", multiply(a, b));
            break;
        case 4:
            if (b != 0)
                printf("Division = %.2f", divide(a, b));
            else
                printf("Division by zero is not allowed");
            break;
        case 5:
            if (b != 0)
                printf("Modulus = %d", modulus(a, b));
            else
                printf("Modulus by zero is not allowed");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}