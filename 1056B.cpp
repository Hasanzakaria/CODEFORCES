#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,t,cou=0,i,j,ans,u;
    cin>>n>>m;
    if(n<=m)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                t=(i*i)+(j*j);
                if(t%m==0)
                {
                   cou++;
                }
            }
        }
        cout<<cou<<"\n";
    }
    else
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                t=(i*i)+(j*j);
                if(t%m==0)
                {
                   cou++;
                }
            }
        }
        ans=((n/m)*(n/m))*cou;
        u=n%m;
        cou=0;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=u;j++)
            {
               t=(i*i)+(j*j);
               if(t%m==0)
               {
                  cou++;
               }
            }
        }
        ans+=(cou*(n/m));
        cou=0;
        for(i=1;i<=u;i++)
        {
            for(j=1;j<=m;j++)
            {
                t=(i*i)+(j*j);
                if(t%m==0)
                {
                   cou++;
                }
            }
        }
        ans+=(cou*(n/m));
        for(i=n-u+1;i<=n;i++)
        {
            for(j=n-u+1;j<=n;j++)
            {
                t=(i*i)+(j*j);
                if(t%m==0)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}