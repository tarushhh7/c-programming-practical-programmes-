#include<stdio.h>
int main() {
    int totaldays;
    int years;
    int week;
    int days;
    int month;

    printf("ENter the no of days\n ");
    scanf("%d",&totaldays);
    years=totaldays/365;
    month=(totaldays%365)/30;
    week=(totaldays%365)/7;
    days=(totaldays%365)%7;

    printf("%d\n",years );
    printf("%d\n",month);
    printf("%d\n",week);
    printf("%d\n",days);
    return 0;
}