#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    //Prompt the user to enter two numbers and an operator
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    //Perform the calculation based on the operator using a switch statement
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Terminate the program with an error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            return 1; // Terminate the program with an error code
    }

    //Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}

