#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,b,l,t,j,ans;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        ans=1;
        l=b/__gcd(a,b);
        t=sqrt(l);
        j=2;
        while(j<=t)
        {
            if(l%j==0)
            {
                while(l%j==0)
                {
                    l/=j;
                    mp[j]++;
                }
                v.push_back(j);
            }
            j++;
        }
        if(l>1)
        {
            mp[l]++;
            v.push_back(l);
        }
        for(j=0;j<v.size();j++)
        {
            ans*=pow(v[j],mp[v[j]]-1)*(v[j]-1);
        }
        cout<<ans<<"\n";
        v.clear();
        mp.clear();
    }

}