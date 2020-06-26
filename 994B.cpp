#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int a,b,c;
};
bool cmp(node x,node y)
{
    if(x.a<y.a)
    {
        return 1;
    }
    return 0;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    multiset<long long int>s;
    multiset<long long int>::iterator p,q,aa;
    map<long long int,long long int>mp;
    long long int n,m,i,l=0,r=0;
    cin>>n>>m;
    node ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i].a;
        ara[i].b=i+1;;
    }
    for(i=0; i<n; i++)
    {
        cin>>ara[i].c;
    }
    sort(ara,ara+n,cmp);
    for(i=0; i<=m; i++)
    {
        l+=ara[i].c;
        mp[ara[i].b]=l;
        s.insert(ara[i].c);
    }

    for(i=m+1; i<n; i++)
    {
        r=0;
        for(p=s.begin(); p!=s.end(); p++)
        {
            r+=(*p);
        }
        p=s.begin();
        mp[ara[i].b]=r+ara[i].c-(*p);
        if(ara[i].c>(*p))
        {
            q=s.find(*p);
            aa=q;
            aa++;
            s.erase(q,aa);
            s.insert(ara[i].c);
        }

    }
    for(i=1; i<=n; i++)
    {
        cout<<mp[i]<<" ";
    }
}