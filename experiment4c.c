#include <stdio.h>
int main () {
    int i,n,num,max;
    printf("Enter how many numbers: ");
    scanf("%d",&n);

    printf("Enter number 1: ");
    scanf("%d",&max); //assume first number max initially 

    for(i=2;i<=n;i++) {
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        if(num>max)
        max=num;
    }
    printf("maximum number =%d\n",max);
    return 0;
}
