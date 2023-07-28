#include <stdio.h>
// This program expects a valid input from the user, you can add additional error handling if you desire
int main()
{
    int num1, result, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operation(+ . - . * . %): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("The sum of the two numbers is %d\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("The difference between the two numbers is %d\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("The product of the two numbers is %d\n", result);
        break;
    case '%':
        result = num1 % num2;
        printf("The remainder of the two numbers is %d\n", result);
        break;
    default:
        printf("Invalid argument\n");
        break;
    }

    return 0;
}
