# Simple Calculator

## Introduction
This program is a basic calculator that:
1. Asks the user to choose an operation (+, -, *, /).
2. Requests two numbers.
3. Computes and displays the result.
4. Asks if the user wants to perform another calculation.
5. Repeats or exits based on user input.

## Required Header File: `#include <stdio.h>`
The program uses the standard input/output library `stdio.h` to:
- Print output using `printf()`.
- Read user input using `scanf()`.

## Main Function: `int main()`
Every C program starts execution from the `main()` function.

## Variable Declarations
```c
char operator;
double num1, num2, result;
char repeat;
```
- `char operator;` → Stores the operation symbol (+, -, *, /).
- `double num1, num2, result;` → Stores the input numbers and the result.
- `char repeat;` → Stores user input to continue or exit (`y` or `n`).

## Program Flow
The program uses a `do-while` loop to ensure at least one calculation is performed and allows repetition.

### Operation Selection
```c
printf(" +  -> Addition
");
printf(" -  -> Subtraction
");
printf(" *  -> Multiplication
");
printf(" /  -> Division
");
scanf(" %c", &operator);
```
- `printf()` displays the menu.
- `scanf(" %c", &operator);` reads the operation input.
  - The space before `%c` removes any leftover newline characters.

### Calculation Using `switch-case`
```c
switch (operator) {
    case '+':  // Addition
        result = num1 + num2;
        break;
    case '-':  // Subtraction
        result = num1 - num2;
        break;
    case '*':  // Multiplication
        result = num1 * num2;
        break;
    case '/':  // Division with error handling
        if (num2 != 0)
            result = num1 / num2;
        else {
            printf("Error: Division by zero is not allowed.
");
            continue;
        }
        break;
    default:
        printf("Invalid operation. Please try again.
");
        continue;
}
```
- The calculation is performed based on user input.
- If `num2 == 0`, an error message is displayed, and the program restarts.

### Repeat or Exit
```c
printf("
Do you want to perform another calculation? (y/n): ");
scanf(" %c", &repeat);
```
- If `y`, the program continues.
- If `n`, the program exits.

## Summary
Key takeaways from this code:
- `printf()` and `scanf()` for user interaction.
- `switch-case` for operation selection.
- Error handling (`if (num2 == 0)`) for division by zero.
- `do-while` loop for program repetition.
