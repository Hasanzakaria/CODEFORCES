#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    map<int,string>mp;
    map<string,int>vp;
    map<int,int>rp,tp;
    map<string,int>cp;
    long long int n,m,r,i,t,j,f,l,x,p=0;
    string a,u;
    cin>>n>>m>>r;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        mp[i]=a;
        cp[a]=i;
    }
    for(i=1;i<=n;i++)
    {
       cin>>t;
       vp[mp[i]]=t;
    }
    for(i=1;i<=m;i++)
    {
        cin>>t;
        l=1000000001;
        for(j=1;j<=t;j++)
        {
           cin>>f;
           rp[f]=i;
           u=mp[f];
           if(vp[u]<l)
           {
               l=vp[u];
           }
        }
        tp[i]=l;
    }
    for(i=1;i<=r;i++)
    {
        cin>>a;
        x=cp[a];
        x=rp[x];
        p+=tp[x];
    }
    cout<<p<<endl;
}