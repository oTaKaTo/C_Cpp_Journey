#include <stdio.h>
#include <string.h>

void introduce(char *name,int age) ; //Function Prototype


int main ()
{
    introduce("Takdanai",17);
    return 0;
}

void introduce(char *name,int age)
{
    if (age<0)
    {
        return;
    }
    printf("My name is %s , I'm %d years old",name,age);
    
}