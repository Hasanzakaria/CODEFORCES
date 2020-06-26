#include<stdio.h>
int main ()
{
    char jak[8][9];
    int i,j,a=0,b=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<9;j++)
        {
            scanf("%c",&jak[i][j]);
            if(jak[i][j]=='Q')
            {
               a=a+9;
            }
            else if(jak[i][j]=='R')
            {
                a=a+5;
            }
            else if(jak[i][j]=='B')
            {
                a=a+3;

            }
            else if(jak[i][j]=='N')
            {
                a=a+3;
            }
            else if(jak[i][j]=='P')
            {
                a=a+1;
            }
            else if(jak[i][j]=='q')
            {
                b=b+9;
            }
            else if(jak[i][j]=='r')
            {
                b=b+5;
            }
            else if(jak[i][j]=='b')
            {
                b=b+3;
            }
            else if(jak[i][j]=='n')
            {
                b=b+3;
            }
            else if(jak[i][j]=='p')
            {
                b=b+1;
            }
        }
    }
    if(a>b)
    {
        printf("White");
    }
    if(b>a)
    {
        printf("Black");
    }
    if(a==b)
    {
        printf("Draw");
    }

}