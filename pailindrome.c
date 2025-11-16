#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; // store the original number

    while (n != 0) {
        remainder = n % 10;              // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        n = n / 10;                      // remove last digit
    }

    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
