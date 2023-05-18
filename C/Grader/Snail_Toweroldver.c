#include <stdio.h>


int main()
{
    int A,B,H ;
    scanf("%d %d %d",&A ,&B ,&H);
    int TD = 0 ;
    int T = 0 ;
    
    while (TD < H)
    {
        TD += A ;
        T += 1 ;
        if(TD >= H)
        {
            break ;
        }
        TD -= B ;
    }
    
    printf("%d",T) ;
    return 0;
}