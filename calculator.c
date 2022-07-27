#include <stdio.h>

int add()
{
    printf("Enter two numbers :");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a + b;
}

int multiply()
{
    printf("Enter two numbers :");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a * b;
}

int subtract()
{
    printf("Enter first number :");
    int a, b;
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    return a - b;
}

double divide()
{
    printf("Enter numerator :");
    double a, b;
    scanf("%lf", &a);
    printf("Enter denominator :");
    scanf("%lf", &b);
    return a / b;
}

int main()
{
    printf("Enter\n1 for addition \n2 for subtraction\n3 for multiplication\n4 for division\n");
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Result : %d", add());
        break;
    case 3:
        printf("Result : %d", multiply());
        break;
    case 4:
        printf("Result : %lf", divide());
        break;
    default:
        printf("Result : %d", subtract());
        break;
    }
}