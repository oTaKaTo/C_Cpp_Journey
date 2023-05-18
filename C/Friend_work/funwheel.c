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
    int *start ;
    start = &A[S-1];
    for(int j = 0;j < R;j++)
    {
        if(start == &A[N-1])
        {
            start = &A[0];
        }
        else
        {
            start++;
        }
    } 
    printf("%d",*start);
    return 0;
}