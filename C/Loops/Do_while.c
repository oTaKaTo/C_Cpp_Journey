#include <stdio.h>

int main()
{
    float w , h , BMI;

    do
    {
        printf("Enter your height (m): ");
        scanf("%f",&h);
    }while(h<=0);
      
    {
        printf("Enter your weight (kg): ");
        scanf("%f",&w);  
    }while(w<=0);
    BMI = w / (h*h) ;
    printf("Your BMI : %.2f",BMI);
    return 0;
}