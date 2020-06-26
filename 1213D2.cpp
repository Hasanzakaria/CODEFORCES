#include<bits/stdc++.h>
using namespace std;
multiset<long long int>s[1000000];
multiset<long long int>::iterator l;
long long int sum[1000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,cou,minn=10000000;
    cin>>n>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        cou=0;
        while(ara[i])
        {
            if(s[ara[i]].size()==k)
            {
                l=s[ara[i]].end();
                l--;
                if(*l>cou)
                {
                    sum[ara[i]]+=cou-*l;
                    s[ara[i]].erase(l);
                    s[ara[i]].insert(cou);
                }
            }
            else
            {
                s[ara[i]].insert(cou);
                sum[ara[i]]+=cou;
            }
            ara[i]/=2;
            cou++;
        }
    }
    for(i=1;i<=200000;i++)
    {
        if(s[i].size()==k)
        {
            minn=min(minn,sum[i]);
        }
    }
    cout<<minn<<"\n";
}