#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
map<long long int,long long int>mp;
set<long long int>s;
set<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,t,i=2,cou,p=1,x,tt,ans=0;
    double u;
    cin>>n;
    t=sqrt(n);
    while(i<=t)
    {
        if(n%i==0)
        {
            v.push_back(i);
            cou=0;
            while(n%i==0)
            {
                n/=i;
                cou++;
            }
            mp[i]=cou;
        }
        i++;
    }
    if(n>1)
    {
        v.push_back(n);
        mp[n]=1;
    }
    for(i=0;i<v.size();i++)
    {
       p*=v[i];
       s.insert(mp[v[i]]);
    }
    if(s.size()>0)
    {
        l=s.end();
        l--;
        u=*l;
        u=ceil(log2(u));
        tt=u;
        x=pow(2,tt);
        ans+=tt;
        l=s.begin();
        while(l!=s.end())
        {
            if(*l!=x)
            {
                ans++;
                break;
            }
            l++;
        }
    }
    cout<<p<<" "<<ans<<"\n";


}