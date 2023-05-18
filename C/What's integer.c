#include <stdio.h>

int main()
{
    int x ;
    printf("Please input your number :") ;
    scanf("%d",&x) ;
    if(x>0)
    {
        printf("%d is a positve number.",x) ;
    }
    else if(x<0) 
    {
        printf("%d is a negative number.",x) ;
    }
    else
    {
        printf("This number is equal to 0.",x) ;
    }
    return 0;
}