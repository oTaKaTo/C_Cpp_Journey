#include<stdio.h>

int isPrime(int);

int main()
{
    int num ;
    scanf("%d",&num);
    (isPrime(num) ==1)? printf("Prime Number") : printf("Not Prime Number");
    return 0;
}

int isPrime(int x)
{
    int count =0 ;
    for(int i = 2 ; i <=x;i++)
    {
        if(x%i == 0)
        {
            count++ ;
        }       
    }
    if(count==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}