#include <stdio.h>

int main()
{
	int i,j;
  scanf("%d %d",&i,&j) ; 
  float num[i][j];
  float *p[i][j];
  p[0][0] = &num[0][0];

  for(int y = 0; y<j ; y++)
  {
    for(int x = 0;x<i;x++)
    {
      scanf("%f",*p[x][y]);
    }
  }
  
	return 0;
}

//Tips:  Run for check input format