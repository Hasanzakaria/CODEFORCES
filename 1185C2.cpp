#include<bits/stdc++.h>
using namespace std;
multiset<long long int>s;
multiset<long long int>::iterator l,u;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k=0,p,cou;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        cou=i-s.size();
        p=k+ara[i];
        if(p<=m)
        {
            cout<<cou<<" ";
        }
        else
        {
            l=s.end();
            l--;
            for(;;l--)
            {
                p-=*l;
                cou++;
                if(p<=m)
                {
                    break;
                }
                if(l==s.begin())
                {
                    break;
                }
            }
            cout<<cou<<" ";
        }
        k+=ara[i];
        if(k<=m)
        {
            s.insert(ara[i]);
        }
        else
        {
            l=s.end();
            l--;
            if(ara[i]<*l)
            {
                k-=*l;
                s.erase(l);
                s.insert(ara[i]);
            }
            else
            {
                k-=ara[i];
            }
        }
    }
}