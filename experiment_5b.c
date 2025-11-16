#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;   // Get the last digit
        sum += digit;          // Add it to the sum
        number /= 10;          // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}