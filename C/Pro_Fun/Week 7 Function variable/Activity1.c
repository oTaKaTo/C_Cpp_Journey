#include <stdio.h>

int swap (int *num1 , int *num2)
{
    int c = *num2;
    *num2 = *num1;
    *num1 = c;
}

int main()
{
    int a , b;
    printf("Enter Number : ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}