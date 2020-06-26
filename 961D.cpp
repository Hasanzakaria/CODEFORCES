#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
long long int n;
pair<long long int,long long int>pq[200000],t,r;
long long int collinear(long long int x1,long long  int y1,long long  int x2,long long int y2,long long  int x3,long long int y3)
{
    long long int a = x1 * (y2 - y3) +
            x2 * (y3 - y1) +
            x3 * (y1 - y2);

    if (a == 0)
        return 1;
    else
        return 0;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,j,f,k,flag,rr,ans=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>pq[i].first>>pq[i].second;
    }
    for(i=1; i<=3; i++)
    {
        for(j=i+1; j<=3; j++)
        {
            flag=0;
            mp[i-1]=1;
            mp[j-1]=1;
            rr=0;
            for(k=0;k<n;k++)
            {
                if(mp[k]==0)
                {
                   f=collinear(pq[i-1].first,pq[i-1].second,pq[j-1].first,pq[j-1].second,pq[k].first,pq[k].second);
                   mp[k]=f;
                }
            }
            for(k=0;k<n;k++)
            {
                if(mp[k]==0&&flag==0)
                {
                    t=pq[k];
                    mp[k]=1;
                    flag=1;
                }
                else if(mp[k]==0&&flag==1)
                {
                    r=pq[k];
                    mp[k]=1;
                    break;
                }
            }
            for(k=0;k<n;k++)
            {
                if(mp[k]==0)
                {
                    f=collinear(t.first,t.second,r.first,r.second,pq[k].first,pq[k].second);
                    if(f==0)
                    {
                       rr=1;
                       break;
                    }
                }
            }
            if(rr==0)
            {
               ans=1;
            }
            mp.clear();
        }
    }
    if(ans)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}