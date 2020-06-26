#include<bits/stdc++.h>
using namespace std;
long long int countt[300000];
bool ara1[300000];
int main ()
{
    long long int n,i,minn=0,t,j,maxx=0,f=3;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        countt[ara[i]-1]++;
    }
    for(i=0;i<=n+1;i++)
    {
        if(countt[i]!=0)
        {
            minn++;
            i+=2;
        }
    }
    for(i=0;i<=n+1;i++)
    {
        if(countt[i]!=0)
        {
           t=min(f,countt[i]);
           for(j=i;j<=i+2;j++)
           {
               if(t>0&&ara1[j]==0)
               {
                   ara1[j]=1;
                   t--;
               }
           }
        }
    }
    for(i=0;i<=n+1;i++)
    {
        if(ara1[i])
        {
            maxx++;
        }
    }
    cout<<minn<<" "<<maxx<<"\n";
}