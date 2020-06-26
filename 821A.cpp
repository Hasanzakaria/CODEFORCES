#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,k,l,p,flag=0,t=0;
    cin>>n;
    int ara[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i][j]!=1)
            {
               flag=0;
               for(k=0;k<n;k++)
               {
                 for(l=0;l<n;l++)
                 {
                    p=ara[i][k]+ara[l][j];
                    if(p==ara[i][j])
                    {
                        flag=1;
                    }
                 }
               }
               if(flag==0)
               {
                   t=1;
               }
            }
        }
    }
    if(t==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}