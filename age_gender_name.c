#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char str1[10];
    char gender;

    scanf("%d", &age);
    getchar();

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    scanf("%c", &gender);

    printf("age=%d, name=%s, gender=%c\n", age, str1, gender);

    return 0;
}
