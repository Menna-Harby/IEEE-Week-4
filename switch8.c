#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
 {
    char operator;
    float num1, num2, result;

   
    printf("Enter two numbers and an operator (e.g., 5 + 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator. Please enter +, -, *, or /.\n");
            return 1; // Exit with an error code
    }

 
    printf("Result: %.2f\n", result);

    return 0;
}


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 in case of division by zero
    }
}
