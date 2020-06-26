#include<bits/stdc++.h>
using namespace std;
long long int n,m;
char jak[1000][1000];
long long int ara[1000][1000];
long long int check(long long int i)
{
    if(i>=0&&i<n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
long long int preprocess(long long int i,long long int j,char ch)
{
    if(i==n)
    {
        return 0;
    }
    if(jak[i][j]==ch)
    {
        ara[i][j]=1+preprocess(i+1,j,ch);
        return ara[i][j];
    }
    else
    {
        return 0;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string r,c;
    cin>>n>>m;
    long long int i,j,k,t,l,sum=0,f=0,u;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>jak[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==0)
            {
                k=preprocess(i,j,jak[i][j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t=ara[i][j];
            k=i+t;
            l=i-t;
            if(check(k)&&check(l))
            {
               if(ara[k][j]>=t&&ara[l][j]==t)
               {
                   if(jak[l][j]!=jak[i][j]&&jak[i][j]!=jak[k][j])
                   {
                      r=r+jak[l][j];
                      r=r+jak[i][j];
                      r=r+jak[k][j];
                      if(r==c&&ara[i][j]==f)
                      {
                         sum+=u+1;
                         u++;
                      }
                      else
                      {
                          sum+=1;
                          c=r;
                          f=ara[i][j];
                          u=1;
                      }
                      r.clear();
                   }
                   else
                   {
                       c.clear();
                   }
               }
               else
               {
                   c.clear();
               }
            }
            else
            {
               c.clear();
            }

        }
        c.clear();
    }
    cout<<sum<<"\n";
}