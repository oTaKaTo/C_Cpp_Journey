#include <stdio.h>

int main()
{
    int x , y , z;
    printf ("Please input 3 sides of this triangles : ") ;
    scanf ("%d %d %d",&x ,&y, &z) ;
    if(x>0 && y> 0 && z > 0)
    {
        if (x+y>z && y+z > x && z+x > y)
        {
        printf("All sides can combine into a triangle.") ;
        }
        else 
        {
        printf("All sides cannot combine into a triangle.") ;
        }
    }
    else
    {
        printf("Please enter valid number.") ;
    }
    return 0;
}