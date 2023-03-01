3.WAP which reads two integer values from user and calculate sum,difference and productusing switch case statements.
#include <stdio.h>

int main() {
    int num1, num2, choice, result;

    // Taking input of the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Displaying the menu and taking user's choice
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Performing the operation based on user's choice using switch case
    switch(choice) {
        case 1: // Addition
            result = num1 + num2;
            printf("Sum of %d and %d is %d\n", num1, num2, result);
            break;
        case 2: // Subtraction
            result = num1 - num2;
            printf("Difference of %d and %d is %d\n", num1, num2, result);
            break;
        case 3: // Multiplication
            result = num1 * num2;
            printf("Product of %d and %d is %d\n", num1, num2, result);
            break;
        default: // Invalid choice
            printf("Invalid choice\n");
    }

    return 0;
}
