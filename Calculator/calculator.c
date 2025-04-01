#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char repeat;

    do {
        // Select operation
        printf("\nWhich operation would you like to perform?\n");
        printf(" +  -> Addition\n");
        printf(" -  -> Subtraction\n");
        printf(" *  -> Multiplication\n");
        printf(" /  -> Division\n");
        printf("Choose an operation: ");
        scanf(" %c", &operator);

        // Input numbers
        switch (operator) {
            case '+':
                printf("\nAddition: Addend + Addend = Sum\n");
                printf("Enter the first addend: ");
                scanf("%lf", &num1);
                printf("Enter the second addend: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Sum: %.2lf\n", result);
                break;
            
            case '-':
                printf("\nSubtraction: Minuend - Subtrahend = Difference\n");
                printf("Enter the minuend: ");
                scanf("%lf", &num1);
                printf("Enter the subtrahend: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Difference: %.2lf\n", result);
                break;
            
            case '*':
                printf("\nMultiplication: Factor * Factor = Product\n");
                printf("Enter the first factor: ");
                scanf("%lf", &num1);
                printf("Enter the second factor: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Product: %.2lf\n", result);
                break;
            
            case '/':
                printf("\nDivision: Dividend / Divisor = Quotient\n");
                printf("Enter the dividend: ");
                scanf("%lf", &num1);
                printf("Enter the divisor: ");
                scanf("%lf", &num2);
                
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Quotient: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    continue; // Return to input
                }
                break;

            default:
                printf("Invalid operation. Please try again.\n");
                continue; // Return to input
        }

        // Repeat?
        printf("\nWould you like to perform another calculation? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    printf("Program terminated.\n");
    return 0;
}
