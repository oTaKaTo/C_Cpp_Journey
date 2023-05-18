#include <stdio.h>


int main()
{
    /*int x = 10 ,y =20,z=30,*p1,*p2;
    p1 = &x;
    p2 = &y;
    printf("A = %d %d %d %d %d\n",x,y,z,*p1,*p2);
    x= 80;
    printf("B = %d %d %d %d %d\n",x,y,z,*p1,*p2);
    
    p1 = &z;
    p2 = p1 ;
    printf("C = %d %d %d %d %d\n",x,y,z,*p1,*p2);

    *p1 = 100 ;
    printf("D = %d %d %d %d %d\n",x,y,z,*p1,*p2);
    
    p1 = &x;
    x = y + *p1 ;
    printf("last = %d %d %d %d %d\n",x,y,z,*p1,*p2);
    */

   int i[5] = { 100,200,300,400,500 } ;
   int *p;
   p = &i[2];
   printf("%d %d %d %d", i[2],p[2],*(i+2),*(p+2));
    return 0;
}