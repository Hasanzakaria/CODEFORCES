#include<bits/stdc++.h>
using namespace std;
multiset<long long int>s;
multiset<long long int>::iterator p;
vector<multiset<long long int> >d;
vector<multiset<long long int> >::iterator k;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,l=1,ans=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    string a;
    cin>>a;
    s.insert(ara[0]);
    for(i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            d.push_back(s);
            s.clear();
            s.insert(ara[i+1]);
            l=1;
        }
        else
        {
            if(l==m)
            {
                p=s.begin();
                if(ara[i+1]>(*p))
                {
                    s.erase(p);
                    s.insert(ara[i+1]);
                    continue;
                }
            }
            else
            {
                s.insert(ara[i+1]);
                l++;
            }

        }
    }
    d.push_back(s);
    for(k=d.begin(); k!=d.end(); k++)
    {
        s=*k;
        for(p=s.begin(); p!=s.end(); p++)
        {
            ans+=*p;
        }
    }
    cout<<ans<<"\n";
}