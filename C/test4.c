#include <stdio.h>
#include <string.h>

int main()
{
    int n ;
    scanf("%d",&n);

    int x =1;
     
       
    while(x<=n)    
    {   
        int y=1;
        while(y<=x)
        {
            printf("*");
            y+=1;
            
        }
        printf("\n");
        x+=1;
    }    
    return 0;
}