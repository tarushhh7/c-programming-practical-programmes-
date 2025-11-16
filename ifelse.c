#include<stdio.h>
int main()
{
    int day;
    printf("Enter day ");
    scanf("%d",&day);
    switch (day)
    {
    case 1: printf("Momday");
    break;
    case 2: printf("Tueday");
    break;
    case 3: printf("Wednesday");
    break;
    case 4: printf("Thursday");
    break;
    case 5: printf("Friday");
    break;
    case 6: printf("saturday");
    break;
    case 7: printf("sunday");
    break;
    default : printf("not valid value");
    
    
    }
    return 0;

}