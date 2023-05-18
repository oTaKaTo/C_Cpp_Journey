/*StatModule.c*/
/*By Thanita Nuchnonsee(6542029226)*/
#include <stdio.h>
#include<math.h>
#define MaxStudent 100

int main(void) 
{
  int NStudent, Cont, ReadNStudent();
  float Score[MaxStudent];
  void ReadScore(float *, int);
  void DisplayStat(float *, int );
  
  do
  {
    NStudent = ReadNStudent();
    ReadScore(&Score, NStudent);
    DisplayStat(&Score, NStudent);
    printf("\n\nDo you want to continue? (Yes=1)--> ");
    scanf("%d", &Cont);
  }while(Cont==1);

  printf("\n\"Thank You for using the program.\"");
  return 0;
}

int ReadNStudent()
{
  int N = 0;
  printf("\nNumber of Students = ");
  scanf("%d", &N); 
  while (N<0||N>MaxStudent)
    {
      printf("\nError!!\nRe-Enter Number of Students = ");
      scanf("%d", &N);
    }
  return N;
}

void ReadScore(float *Score, int NStudent)
{
  int i;
  float S[i-1];
  for(i=1; i<=NStudent; i++)
    {
      printf("\nStudent %d Score = ", i);
      scanf("%f", &Score[i-1]);
      while(Score[i-1]<0)
      {
        printf("\nError!!\nWe do not have minus score!!\n");
        printf("\nStudent %d Score = ", i);
        scanf("%f", &Score[i-1]);
      }
      while(Score[i-1]>100)
      {
        printf("\nError!!\nScore cannot exceed 100!!\n");
        printf("\nStudent %d Score = ", i);
        scanf("%f", &Score[i-1]);
      }
    }
}

void DisplayStat(float *S, int N)
{
  int i;
  float Mean, Variance, FindMean(float *, int), FindVariance(float *, float, int);
  
  printf("\nScore of %d Students are\n", N);
  for(i=1; i<=N; i++)
  {
    printf("%.2f   ", S[i-1]);
    if(i%5==0)
       printf("\n");
  }
  Mean = FindMean(S, N);
  Variance = FindVariance(S, Mean, N);
  printf("\n\nMean = %.3f", Mean);
  printf("\nVariance = %.3f", Variance);
}

float FindMean(float *S, int N)
{
  int i;
  float Total, M;
  Total = 0;
  for(i=0; i<N; i++)
  {
    Total = Total+S[i];
  }
  M = Total/N;
  return M;
}

float FindVariance(float *S, float Mean, int N)
{
  int i;
  float TotalSum, V;
  TotalSum = 0;
  for(i=0; i<N; i++)
  {
    TotalSum = TotalSum+pow(S[i]-Mean,2);  
  }
  V = TotalSum/N;
  return V;
}