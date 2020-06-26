#include<bits/stdc++.h>
using namespace std;
queue<pair<long long int,long long int> >pq;
map<char,bool>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k,l,cou=0,f;
    pair<long long int,long long int>t;
    cin>>n;
    string a;
    cin>>a;
    l=1;
    k=0;
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            l++;
        }
        else
        {
            if(l>1)
            {
                pq.push(make_pair(k,i));
            }
            l=1;
            k=i+1;
        }
    }
    if(l>1)
    {
        pq.push(make_pair(k,n-1));
    }
    while(!pq.empty())
    {
        t=pq.front();
        pq.pop();
        mp[a[t.first]]=1;
        mp[a[t.second+1]]=1;
        if(mp['R']==0)
        {
            for(i=t.first+1; i<=t.second; i+=2)
            {
                a[i]='R';
                cou++;
            }
        }
        else if(mp['G']==0)
        {
            for(i=t.first+1; i<=t.second; i+=2)
            {
                a[i]='G';
                cou++;
            }
        }
        else
        {
            for(i=t.first+1; i<=t.second; i+=2)
            {
                a[i]='B';
                cou++;
            }
        }
        mp.clear();

    }
    cout<<cou<<"\n";
    cout<<a<<"\n";

}