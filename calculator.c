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
int main()
{
    printf("Enter\n1 for addition \n2 for subtraction3 for multiplication\n");
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
    default:
        printf("Result : %d", subtract());
        break;
    }
}