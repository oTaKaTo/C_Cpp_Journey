#include <stdio.h>


int main()
{
    int A,B,H ;
    scanf("%d %d %d",&A ,&B ,&H);
      
    int X = H-A ;  // Height left
    int G = A-B ; // Gap of up down
    int T=1 ;
    
    if(X % G == 0)
    {
        T += X/G   ;
    }
    else
    {
        T += (X/G) + 1 ;
    }


    printf("%d",T) ;
    return 0;
}