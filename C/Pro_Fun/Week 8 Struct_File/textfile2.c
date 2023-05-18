#include <stdio.h>

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

    for(int i =0;i<5;i++)
    {
        scanf("%s",p[i].name);
        scanf("%d",&p[i].level) ;
        scanf("%d",&p[i].score) ;
    }
    ptr = p ;

    for(int i = 0 ; i<5 ; i++)
    {
        printf("Player %d's name : %s \t",i+1,p[i].name);
        printf("level : %d \t",p[i].level);
        printf("score : %d \n",p[i].score);
    }

    fp = fopen("player.txt","w");
    for(int i = 0 ; i<5; i++)
    {
        fprintf(fp,"Name : %s \t",ptr->name);
        fprintf(fp,"level : %d \t",ptr->level);
        fprintf(fp,"score : %d \n",ptr->score);
        ptr++;
    }

    fclose(fp);
    return 0;
}