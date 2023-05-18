#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l ;

    scanf("%d.%d.%d.%d",&i,&j,&k,&l) ;

    if(i>=0 && i<=255 && j>=0 && j<=255 && k>=0 && k<=255 && l>=0 && l<=255)
    {
        printf("IP!!!");
    }
    else
    {
        printf("NOT IP!!!");
    }

    return 0;
}

//0 <= i <=255 && 0 <= j <=255 && 0 <= k <=255 && 0 <= l <=255)