#include<iostream>
using namespace std;
int main ()
{
    int n,m,i,j,k,cou=0,flag=0;
    cin>>n>>m;
    int ara[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==0)
            {
               flag=0;
               for(k=j+1;k<m;k++)
               {
                   if(ara[i][k]==1&&flag==0)
                   {
                     cou++;
                     flag=1;
                     break;
                   }
               }
               flag=0;
               for(k=0;k<j;k++)
               {
                   if(ara[i][k]==1&&flag==0)
                   {
                       cou++;
                       flag=1;
                       break;
                   }
               }
               flag=0;
               for(k=i+1;k<n;k++)
               {
                   if(ara[k][j]==1&&flag==0)
                   {
                       cou++;
                       flag=1;
                       break;
                   }
               }
               flag=0;
               for(k=0;k<i;k++)
               {
                   if(ara[k][j]==1&&flag==0)
                   {
                       cou++;
                       flag=1;
                       break;
                   }
               }
            }
        }
    }
    cout<<cou;
}