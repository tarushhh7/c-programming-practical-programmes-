#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void my_strrev(char str[]) {
    int i = 0, j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    my_strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
