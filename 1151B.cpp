#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,f=0,flag=0,r,e;
    cin>>n>>m;
    long long int ara[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
       f^=ara[i][0];
    }
    if(f>0)
    {
       cout<<"TAK\n";
       for(i=0;i<n;i++)
       {
           cout<<1<<" ";
       }
    }
    else
    {
       for(i=0;i<n;i++)
       {
           for(j=1;j<m;j++)
           {
               if(ara[i][j]!=ara[i][0])
               {
                  flag=1;
                  r=i;
                  e=j+1;
                  break;
               }
           }
       }
       if(flag==0)
       {
         cout<<"NIE\n";
       }
       else
       {
           cout<<"TAK\n";
           for(i=0;i<n;i++)
           {
               if(r==i)
               {
                   cout<<e<<" ";
                   continue;
               }
               cout<<1<<" ";
           }
       }
    }
}