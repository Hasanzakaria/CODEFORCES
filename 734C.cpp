#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main ()
{
    long long int a,b,c,d,e,i,k,p,t,l;
    cin>>a>>b>>c>>d>>e;
    pair<long long int,long long int>ara[b];
    for(i=0;i<b;i++)
    {
        cin>>ara[i].first;
    }
    for(i=0;i<b;i++)
    {
        cin>>ara[i].second;
    }
    pair<long long int,long long int>tak[c];
    for(i=0;i<c;i++)
    {
        cin>>tak[i].first;
    }
    for(i=0;i<c;i++)
    {
        cin>>tak[i].second;
    }
    sort(tak,tak+c);
    l=e;
    for(i=c-1;i>=0;i--)
    {
        p=e;
        t=a;
        if(tak[i].second<=e)
        {
            p-=tak[i].second;
            t-=tak[i].first;
            if(t<=a&&p<l)
            {
                a=t;
                l=p;
            }
        }
    }
    e=l;
    sort(ara,ara+b);
    for(i=0;i<b;i++)
    {
        if(ara[i].second<=e)
        {
            if(ara[i].first<d)
            {
                d=ara[i].first;
            }
        }
    }
    k=a*d;
    cout<<k;




}