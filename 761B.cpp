#include<bits/stdc++.h>
using namespace std;
int main ()
{
    deque<int>d,p;
    int a,b,i,k,flag=0,r;
    cin>>a>>b;
    int ara[a],tak[a];
    for(i=1;i<=a;i++)
    {
        cin>>ara[i-1];
    }
    for(i=1;i<=a;i++)
    {
        cin>>tak[i-1];
    }
    for(i=0;i<a-1;i++)
    {
       k=ara[i+1]-ara[i];
       d.push_back(k);
    }
    k=b-ara[i]+ara[0];
    d.push_back(k);
    for(i=0;i<a-1;i++)
    {
        k=tak[i+1]-tak[i];
        p.push_back(k);
    }
    k=b-tak[i]+tak[0];
    p.push_back(k);
    for(i=1;i<=a;i++)
    {
        if(p==d)
        {
           flag=1;
           break;
        }
        r=d.front();
        d.pop_front();
        d.push_back(r);

    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}