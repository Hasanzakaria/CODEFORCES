#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,f,i,res,cou=0,l=1,t;
    vector<long long int>v;
    vector<long long int>u;
    vector<long long int>::iterator ll,kk;
    cin>>n>>m;
    f=log2(n+1);
    while(f!=0)
    {
        res=1;
        for(i=1;i<=f;i++)
        {
            res=res*2;
        }
        res--;
        cou+=f;
        u.push_back(f);
        n-=res;
        f=log2(n+1);
        v.push_back(l);
        l+=m;
    }
    ll=v.begin();
    kk=u.begin();
    cout<<cou+n<<endl;
    while(ll!=v.end())
    {
        t=*kk;
        for(i=1;i<=t;i++)
        {
            cout<<*ll<<" ";
        }
        ll++;
        kk++;
    }
    for(i=1;i<=n;i++)
    {
        cout<<l<<" ";
        l+=m;
    }
}