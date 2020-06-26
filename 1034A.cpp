#include<bits/stdc++.h>
using namespace std;
bool ara[4001];
vector<long long int>v,tt;
vector<long long int>::iterator l;
int ans[4001];
map<int,int>mp;
void sieve(int n)
{
    int i,j;
    ara[1]=1;
    for(i=4;i<=n;i+=2)
    {
        ara[i]=1;
    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(ara[i]==0)
        {
           for(j=i*i;j<=n;j+=2*i)
           {
               ara[j]=1;
           }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(4000);
    int i,f,t;
    for(i=1;i<=4000;i++)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
        }
    }
    int n,k,ff,u;
    cin>>n;
    u=n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    k=ara[0];
    for(i=1;i<n;i++)
    {
        k=__gcd(k,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        ara[i]=ara[i]/k;
        f=ara[i];
        for(l=v.begin();l!=v.end();l++)
        {
           t=*l;
           if(t<=sqrt(f))
           {
               if((f%t)==0)
               {
                   while((f%t)==0)
                   {
                       f/=t;
                   }
                   ans[t]++;
               }
           }
           else
           {
               break;
           }
        }
        if(f>1&&f>4000)
        {
          tt.push_back(f);
          mp[f]++;
        }
        else if(f>1)
        {
            ans[f]++;
        }
    }
    for(i=1;i<=4000;i++)
    {
        u=min(u,n-ans[i]);
    }
    for(l=tt.begin();l!=tt.end();l++)
    {
        ff=*l;
        u=min(u,n-mp[ff]);
    }
    if(u==n)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<u<<"\n";
    }
}