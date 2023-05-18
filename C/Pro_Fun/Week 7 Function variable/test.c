#include<stdio.h>

int ga = 10 , gb =20 ;

int f1(int a,int b){
    a = a*10;
    b = b*2;
    ga = ga+10;
    return a+b;
}

int f2(int *a,int *b)
{
    *a = *a + 3;
    *b = *b + 1;
    gb = gb + 20;
    return *a + *b;

}

int f3(int a,int *b)
{
    a = a + 5;
    *b = *b + 1;
    ga += gb ;
    return a + *b;

}

int main()
{
    int la = 100 , lb = 200;
    printf("A: %d %d %d %d\n",ga,gb,la,lb); // 10 20 100 200
    lb = f1(ga,gb);
    printf("B: %d %d %d %d\n",ga,gb,la,lb); // 20 20 100 140
    ga = f2(&la,&lb);
    printf("C: %d %d %d %d\n",ga,gb,la,lb); //244 40 103 141
    lb = f3(ga,&gb);
    printf("D: %d %d %d %d\n",ga,gb,la,lb); //285 41 103 290
    return 0;
}