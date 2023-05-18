#include<stdio.h>

int max(int,int);

int main()
{
    int a =10 ,b =20;
    printf("max = %d", max(a,b));
    return 0 ;
}
int max(int x , int y)
{
    if(x>y)
    {
        return x;
    }
    else return y;
}