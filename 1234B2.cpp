#include<bits/stdc++.h>
using namespace std;
deque<long long int>d;
set<long long int>s;
set<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,i,t=0,r;
    cin>>a>>b;
    long long int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
        l=s.find(ara[i]);
        if(l==s.end())
        {
            if(t==b)
            {
                r=d.back();
                d.pop_back();
                l=s.find(r);
                s.erase(l);
                s.insert(ara[i]);
                d.push_front(ara[i]);

            }
            else
            {
                d.push_front(ara[i]);
                t++;
                s.insert(ara[i]);
            }
        }
    }
    cout<<t<<"\n";
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop_front();
    }
}