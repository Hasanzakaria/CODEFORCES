#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
vector<long long int>::iterator f;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,a,b,l,r,z=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    for(i=1;i<=m;i++)
    {
        sort(v[i].begin(),v[i].end());
        reverse(v[i].begin(),v[i].end());
        l=1;
        r=0;
        for(f=v[i].begin();f!=v[i].end();f++)
        {
            r+=*f;
            if(r>0)
            {
               mp[l]=mp[l]+r;
               z=max(z,mp[l]);
            }
            l++;
        }
    }
    cout<<z<<endl;

}