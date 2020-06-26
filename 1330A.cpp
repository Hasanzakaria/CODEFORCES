#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,b,j,t;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]=1;
        }
        t=1;
        while(b>0)
        {
            if(mp[t]==0)
            {
                mp[t]=1;
                b--;
            }
            t++;
        }
        for(j=1;j<=400;j++)
        {
            if(mp[j]==0)
            {
                cout<<j-1<<"\n";
                break;
            }
        }
        mp.clear();
    }

}