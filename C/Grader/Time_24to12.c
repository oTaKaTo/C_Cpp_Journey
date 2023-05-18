#include <stdio.h>

int main()
{
    int h , m ;
    scanf("%d.%d",&h,&m) ;

    if (h>24 || h==0 || m>59 )
    {
        printf("ERROR!") ;
    }
    else if (h==24 && m>0)
    {
        printf("12.%d AM",m)             ;
    }
    else if (h >= 12)
    {   
        h -= 12 ;
        if(h==0)
        {
            h+=12 ;
            printf("%02d.%02d PM",h,m) ;
        }
        else if (h==12)
        {
            h -= 12 ;           
            printf("%02d.%02d AM",h,m) ;
        }
        else
        {
            printf("%02d.%02d PM",h,m) ;
        }
    }
    else
    {
        printf("%02d.%02d AM",h,m) ;
    }
    return 0;
}