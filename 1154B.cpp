#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,r,flag,u,y,ans=100000,j;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=-1000;i<=1000;i++)
    {
        t=i;
        flag=0;
        y=0;
        u=0;
        for(j=0;j<n;j++)
        {
            r=abs(ara[j]-t);
            if(r!=0&&flag==0)
            {
                flag=1;
                u=r;
            }
            else if(r!=0&&flag==1)
            {
                if(u!=r)
                {
                   y=1;
                }
            }
        }
        if(y==0)
        {
            ans=min(ans,u);
        }
    }
    if(ans==100000)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<ans<<"\n";
    }

}