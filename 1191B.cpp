#include<bits/stdc++.h>
using namespace std;
map<string,long long int>mp;
vector<string>v;
vector<long long int>p;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b,c;
    char ch;
    long long int i,k=100000,t,r,u,l=1,flag=0;
    cin>>a>>b>>c;
    if(mp[a]==0)
    {
        mp[a]++;
        v.push_back(a);
    }
    else
    {
        mp[a]++;
    }
    if(mp[b]==0)
    {
        mp[b]++;
        v.push_back(b);
    }
    else
    {
        mp[b]++;
    }
    if(mp[c]==0)
    {
        mp[c]++;
        v.push_back(c);
    }
    else
    {
        mp[c]++;
    }
    for(i=0;i<v.size();i++)
    {
        k=min(k,3-mp[v[i]]);
    }
    if(a[1]==b[1]&&b[1]==c[1])
    {
       t=a[0]-48;
       r=b[0]-48;
       u=c[0]-48;
       p.push_back(t);
       p.push_back(r);
       p.push_back(u);
       sort(p.begin(),p.end());
       for(i=0;i<p.size()-1;i++)
       {
           if(p[i+1]!=p[i]+1)
           {
              flag=1;
           }
           if(p[i+1]-p[i]==2||p[i+1]-p[i]==1)
           {
               k=1;
           }
       }
       if(flag==0)
       {
           k=0;
       }
    }
    else if(a[1]==b[1])
    {
        t=a[0]-48;
        u=b[0]-48;
        r=abs(t-u);
        if(r==2||r==1)
        {
            k=min(k,l);
        }
    }
    else if(b[1]==c[1])
    {
        t=b[0]-48;
        u=c[0]-48;
        r=abs(t-u);
        if(r==2||r==1)
        {
            k=min(k,l);
        }
    }
    else if(c[1]==a[1])
    {
        t=c[0]-48;
        u=a[0]-48;
        r=abs(t-u);
        if(r==2||r==1)
        {
            k=min(k,l);
        }
    }
    cout<<k<<endl;

}