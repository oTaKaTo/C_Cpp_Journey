#include <stdio.h>

int main()
{
    int N , S ,R ;
    scanf("%d",&N);
    int A[N];
    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d %d",&S,&R);
    int z = S-1;
    for(int j = 1;j <= R;j++)
    {
        if(z == N-1)
        {
            z = 0 ; 
        }
        else
        {
            z++;
        }
    } 
    printf("%d",A[z]);
    return 0;
}