#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,p;
vector<long long int>::iterator t;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,a,b,k,i,e,r;
    cin>>n;
    cin>>a>>b;
    i=2;
    while(i<=sqrt(a))
    {
        if(a%i==0)
        {
            v.push_back(i);
            mp[i]=1;
            while(a%i==0)
            {
                a/=i;
            }
        }
        i++;
    }
    if(a>1)
    {
        mp[a]=1;
        v.push_back(a);
    }
    i=2;
    while(i<=sqrt(b))
    {
        if(b%i==0)
        {
            if(mp[i]==0)
            {
                v.push_back(i);
            }
            while(b%i==0)
            {
                b/=i;
            }
        }
        i++;
    }
    if(b>1)
    {
        if(mp[b]==0)
        {
            v.push_back(b);
        }
    }
    for(i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        for(t=v.begin();t!=v.end();t++)
        {
           r=*t;
           if(a%r==0||b%r==0)
           {
              p.push_back(r);
           }
        }
        v=p;
        p.clear();
    }
    if(v.size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        t=v.begin();
        cout<<*t<<endl;
    }
}