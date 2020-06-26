#include<bits/stdc++.h>
using namespace std;
vector<string>v,t;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,q,k,f,g;
    string s;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    for(i=1;i<=m;i++)
    {
        cin>>s;
        t.push_back(s);
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>k;
        f=k%n;
        if(f==0)
        {
            f=n-1;
        }
        else
        {
            f--;
        }
        g=k%m;
        if(g==0)
        {
            g=m-1;
        }
        else
        {
            g--;
        }
        cout<<v[f];
        cout<<t[g]<<"\n";
    }
}