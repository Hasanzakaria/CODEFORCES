#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,maxx,ans,k,l,tt,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        ans=1e17;
        k=-1;
        l=-1;
        pair<long long int,long long int>pq[a];
        for(j=0;j<a;j++)
        {
            cin>>pq[j].first>>pq[j].second;
            if(pq[j].first>=b)
            {
                ans=1;
            }
            if(pq[j].first>pq[j].second)
            {
                 k=max(k,pq[j].first-pq[j].second);
            }
            l=max(l,pq[j].first);
        }
        tt=b-l;
        if(tt>0&&k>0)
        {
            u=tt/k;
            if(tt%k==0)
            {
                u++;
            }
            else
            {
                u+=2;
            }
            ans=min(ans,u);
        }
        if(ans==1e17)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<ans<<"\n";
        }
    }

}