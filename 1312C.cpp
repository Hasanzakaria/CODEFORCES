#include<bits/stdc++.h>
using namespace std;
long long int power[68];
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,b,j,p,t,x,flag;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        t=0;
        flag=0;
        p=1;
        cin>>a>>b;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        while(p<=1e17)
        {
            power[t]=p;
            x=p;
            p*=b;
            if((p/b)!=x)
            {
                break;
            }
            t++;
        }
        for(j=0;j<a;j++)
        {
            t=67;
            while(t>=0)
            {
                if(ara[j]>=power[t]&&mp[t]==0)
                {
                    ara[j]-=power[t];
                    mp[t]=1;
                }
                t--;
            }
        }
        for(j=0;j<a;j++)
        {
            if(ara[j])
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        memset(power,0,sizeof(power));
        mp.clear();
    }

}