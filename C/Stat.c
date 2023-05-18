#include <stdio.h>
#include <math.h>

int main()
{
    int n,score[n];
    float xbar=0 ;
    
    printf("Number of Students = ");
    scanf("%d",&n);
    
    for(int i = 0 ; i<n ; i++)
    {
        printf("Score of Student #%d = ",i+1);
        scanf("%d",&score[i]);
    }

    //หา xbar 
    for(int i = 0 ; i<n ; i++)
    {
        xbar += score[i] ;
    }
    xbar  /= 5 ;
    printf("\nMean Score = %.2f\n",xbar);
    float first =0 , up ;
    //หาตัวเศษ up
    for(int i = 0 ; i<n ; i++)
    {
        first += score[i]-xbar;
        up += pow(first,2);
        //printf("%.2f\n",first);
        first = 0;
    
    }
    //printf("%f",up);

    //หาตัวเศษ down
    up /= n ;

    printf("Variance = %.2f\n",up);

    int input;
    printf("\nPress 1 to start working again -> ");
    scanf("%d",&input);

    if(input == 1)
    {
        main() ;
    }
    else
    {
        printf("Thank you!");
    }
    

    return 0;
}