#include <stdio.h>

int main() {
    int a = 0, b = 
    1, c, n, i;

    printf("Enter the number of terms of Fibonacci series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
