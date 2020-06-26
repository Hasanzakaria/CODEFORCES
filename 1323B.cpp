#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,kk,i=1,tt,e,a,b,j,t,k,ans1,ans2,ans=0,ee;
    cin>>n>>m>>kk;
    long long int ara[n],ara1[m];
    tt=sqrt(kk);
    while(i<=tt)
    {
        if(kk%i==0)
        {
            ee=kk/i;
            v.push_back(i);
            if(ee!=i)
            {
                v.push_back(ee);
            }
        }
        i++;
    }
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=1; i<n; i++)
    {
        ara[i]+=ara[i-1];
    }
    for(i=0; i<m; i++)
    {
        cin>>ara1[i];
    }
    for(i=1; i<m; i++)
    {
        ara1[i]+=ara1[i-1];
    }
    for(i=0; i<v.size(); i++)
    {
        a=v[i];
        b=kk/a;
        ans1=0;
        ans2=0;
        for(j=0; j<n; j++)
        {
            t=j+a-1;
            if(t<n)
            {
                if(j==0)
                {
                    k=ara[t];
                }
                else
                {
                    k=ara[t]-ara[j-1];
                }
                if(k==a)
                {
                    ans1++;
                }
            }
        }
        for(j=0; j<m; j++)
        {
            t=j+b-1;
            if(t<m)
            {
                if(j==0)
                {
                    k=ara1[t];
                }
                else
                {
                    k=ara1[t]-ara1[j-1];
                }
                if(k==b)
                {
                    ans2++;
                }
            }
        }
        ans+=ans1*ans2;
    }
    cout<<ans<<"\n";

}