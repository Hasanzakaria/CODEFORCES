#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,cou;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        cou=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if((ara[j]%2)==0)
            {
                if(mp[ara[j]]==0)
                {
                    mp[ara[j]]=1;
                    v.push_back(ara[j]);
                }
            }
        }
        sort(v.begin(),v.end());
        for(j=0;j<v.size();j++)
        {
            k=v[j];
            while((k%2)==0&&cp[k]==0)
            {
                cp[k]=1;
                k/=2;
                cou++;
            }
        }
        cout<<cou<<"\n";
        mp.clear();
        v.clear();
        cp.clear();
    }

}