// Q25. Write a program to implement a basic calculator using switch-case for +, -, *, /, and %.

#include <stdio.h>
int main() {
    char op;
    float a, b, result;
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch(op) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if ((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
