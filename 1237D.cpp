#include<bits/stdc++.h>
using namespace std;
long long int ans[1000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,t,minn=1e17,temp,cou=1;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]>maxx)
        {
            maxx=ara[i];
            t=i;
        }
        minn=min(minn,ara[i]);
    }
    if(2*minn>=maxx)
    {
        for(i=0; i<n; i++)
        {
            cout<<-1<<" ";
        }
    }
    else
    {
        i=t;
        temp=maxx;
        i++;
        i%=n;
        while(ara[i]*2>=maxx)
        {
            cou++;
            i++;
            i%=n;
        }
        ans[t]=cou;
        i=t-1;
        if(i==-1)
        {
            i=n-1;
        }
        while(ans[i]==0)
        {
            if(i==n-1)
            {
               if(ara[n-1]<=2*ara[0])
               {
                   ans[n-1]=ans[0]+1;
               }
               else
               {
                    ans[n-1]=1;
               }
            }
            else
            {
               if(ara[i]<=ara[i+1]*2)
               {
                   ans[i]=ans[i+1]+1;
               }
               else
               {
                    ans[i]=1;
               }
            }
            i--;
            if(i==-1)
            {
                i=n-1;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
    }


}