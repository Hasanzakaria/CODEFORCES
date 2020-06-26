#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,u,minn,maxx;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        minn=2000000;
        maxx=-10;
        cin>>a;
        for(j=1;j<=a;j++)
        {
            cin>>k;
            mp[k]=j;
        }
        for(j=1;j<=a;j++)
        {
            u=mp[j];
            minn=min(minn,u);
            maxx=max(maxx,u);
            if(maxx-minn+1==j)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<"\n";
        mp.clear();
    }

}