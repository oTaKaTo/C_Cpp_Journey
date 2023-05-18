#include <stdio.h>

int main()
{
    char name[100] ;
    int age ;
    float gpa = 3.99 ;
    char grade = 'A' ;
    scanf("%s" , &name) ;
    printf ("My name is %s\n" , name) ;
    printf("I am %d years old\n" , age) ;
    printf("My GPA is %.2f \n", gpa) ;
    printf("Grade : %c \n" , grade) ;
    printf("Grade(int): %d", grade) ;
    return 0 ;
}