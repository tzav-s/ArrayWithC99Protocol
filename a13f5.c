#include<stdio.h>
#include"simpio.h"
#include"genlib.h"
#include<math.h>

#define STANDAR 10

void populate_data(int S,int table[S][S]);
void print_Array(int R,int C,int table[R][C]);
void change_Array(int R,int C,int table[R][C],int maxPlace[],int maxNum[]);

int main ()
{
    int R,C;
    int table[STANDAR][STANDAR];
    int maxPlace[STANDAR];
    int maxNum[STANDAR];

    printf("Dwse ton arithmo twn grammwn:");
    R=GetInteger();
    printf("Dwse ton arithmo twn sthlwn:");
    C=GetInteger();

    populate_data(STANDAR,table);

    printf("ARXIKOS PINAKAS\n");
    print_Array(R,C,table);

    change_Array(R,C,table,maxPlace,maxNum);

    printf("ALLAGMENOS PINAKAS\n");
    print_Array(R,C,table);




    system("PAUSE");
    return 0;
}
void populate_data(int S,int table[S][S])
{
    int i,j;

    for(i=0;i<S;i++)
    {
        for(j=0;j<S;j++)
        {
            table[i][j]=rand()%100;
        }
    }
}
void print_Array(int R,int C,int table[R][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf(" %d ",table[i][j]);
        }
        printf("\n");
    }
}
void change_Array(int R,int C,int table[R][C],int maxPlace[],int maxNum[])
{
    int i,j;


    for(i=0;i<R;i++)
    {maxNum[i]=table[i][0];
        for(j=1;j<C;j++)
        {
            if(maxNum[i]<table[i][j])
            {
                maxNum[i]=table[i][j];
               maxPlace[i]=j;
            }
        }
    }
    for(i=0;i<R;i++)
    {
      for(j=0;j<=maxPlace[i];j++)
      {
          table[i][j]=maxNum[i];
      }
    }
}

