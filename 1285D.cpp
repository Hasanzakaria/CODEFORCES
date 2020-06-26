#include<bits/stdc++.h>
using namespace std;
long long int ara1[100000][33],tak[33];
queue<long long int>s;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,f,l,u,flag,ans,p=0,j,maxx=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        f=ara[i];
        while(f)
        {
            s.push(f%2);
            f/=2;
        }
        u=0;
        while(!s.empty())
        {
            ara1[i][u]=s.front();
            s.pop();
            u++;
        }
    }
    for(i=0;i<=32;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(ara1[j][i]==1)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
           tak[i]=1;
        }
    }
    flag=0;
    ans=1;
    for(i=0;i<=32;i++)
    {
       p+=tak[i]*ans;
       ans=ans*2;
    }
    ans=p;
    //cout<<p<<endl;
    //cout<<ans<<endl;
    for(i=0;i<n;i++)
    {
        p=ans^ara[i];
        maxx=max(p,maxx);
    }
    cout<<maxx<<"\n";

}