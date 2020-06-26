#include<bits/stdc++.h>
using namespace std;
vector<string>v,l,r,k;
map<string,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,i,j,u;
    string s,t;
    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
        cin>>s;
        v.push_back(s);
        mp[s]=1;
    }
    for(i=0; i<v.size(); i++)
    {
        s=v[i];
        for(j=b-1; j>=0; j--)
        {
            t+=s[j];
        }
        if(s==t)
        {
            l.push_back(s);
        }
        else
        {
            if(mp[t]==1&&cp[t]==0)
            {
                cp[t]=1;
                cp[s]=1;
                r.push_back(s);
                k.push_back(t);
            }
        }
        t.clear();
    }
    int sizee=0;
    if(r.size()>0)
    {
        sizee= (r.size()*b)+(k.size()*b);
    }
    if(l.size()>0)
    {
        sizee+=b;
    }
    cout<<sizee<<endl;
    if(sizee>0)
    {
        for(j=0; j<r.size(); j++)
        {
            cout<<r[j];
        }
        if(l.size()>0)
        {
            cout<<l[0];
        }
        u=k.size();
        for(j=u-1; j>=0; j--)
        {
            cout<<k[j];
        }

    }

}