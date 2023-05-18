#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;

    struct player
    {
        char name[50];
        int level;
        int score;
    };

    struct player p[5],*ptr;

    for(int i = 0; i< 5 ;i++)
    {
        scanf("%s",p[i].name);
        scanf("%d",&p[i].level);
        scanf("%d",&p[i].score);
    }

    
    ptr = p ;
    fp = fopen("binary.txt","w");
        fwrite(p,sizeof(struct player),5,fp);


    
    return 0;
}