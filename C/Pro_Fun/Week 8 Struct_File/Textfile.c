#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp;
    fp = fopen("mytestfile.txt","a");
    fprintf(fp , "%d %d %d\n",100,200,500);
    fclose(fp);
    return 0;
}