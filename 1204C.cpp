#include<bits/stdc++.h>
using namespace std;
bool test[3000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,r,f,cou=1,t,ans=0;
    cin>>n;
    char ch;
    long long int ara[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>ch;
           k=ch-48;
           if(i==j)
           {
               ara[i][j]=0;
           }
           else if(k==1)
           {
               ara[i][j]=1;
           }
           else
           {
               ara[i][j]=1e9;
           }
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                ara[i][j]=min(ara[i][j],ara[i][k]+ara[k][j]);
            }
        }
    }
    cin>>r;
    long long int check[r];
    for(i=0;i<r;i++)
    {
        cin>>check[i];
    }
    test[r-1]=1;
    test[0]=1;
    f=check[r-1];
    for(i=r-2;i>=0;i--)
    {
       t=check[i];
       if(ara[t-1][f-1]!=cou)
       {
          cou=2;
          f=check[i+1];
          test[i+1]=1;
          continue;
       }
       cou++;
    }
    for(i=0;i<r;i++)
    {
       if(test[i])
       {
           ans++;
       }
    }
    cout<<ans<<endl;
    for(i=0;i<r;i++)
    {
        if(test[i])
        {
            cout<<check[i]<<" ";
        }
    }


}