#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leftover newline

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert uppercase to lowercase for simplicity
        ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("'%c' is a vowel.\n", ch);
        else
            printf("'%c' is a consonant.\n", ch);
    } else {
        printf("'%c' is not a valid alphabet.\n", ch);
    }

    return 0;
}