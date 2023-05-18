#include<stdio.h>

int main()
{
    int x,y ;
    char z ;
    printf("Enter Expression : ") ;
    scanf("%d %c %d",&x,&z,&y) ;
    switch(z)
    {
        case('+') :
            printf("Your result : %d",x+y) ;
            break;
        case('-') :
            printf("Your result : %d",x-y) ;
            break;
        case('*') :
            printf("Your result : %d",x*y) ;
            break;
        case('/') :
            printf("Your result : %d",x/y) ;
            break ;
        default :
            printf("ERROR");
    }    
    return 0 ;

}