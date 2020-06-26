#include<bits/stdc++.h>
using namespace std;
queue<pair<long long int,long long int> >q;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a;
    long long int k,i,cou=0,tx,ty,l,p;
    pair<long long int,long long int>pq;
    cin>>a;
    k=a.size();
    for(i=0; i<k-1; i++)
    {
        if(a[i]==a[i+1])
        {
            q.push(make_pair(i,i+1));
            mp[i]=1;
            mp[i+1]=1;
            i++;
            cou++;
        }
    }
    while(!q.empty())
    {
        pq=q.front();
        q.pop();
        tx=pq.first;
        ty=pq.second;
        l=tx-1;
        p=ty+1;
        if(mp[l]==0||mp[p]==0)
        {
            while(mp[l]!=0)
            {
                l--;
            }
            while(mp[p]!=0)
            {
                p++;
            }
            if(l>=0&&p<k)
            {
                if(a[l]==a[p]&&mp[l]==mp[p]&&mp[l]==0)
                {
                    q.push(make_pair(l,p));
                    mp[l]=1;
                    mp[p]=1;
                    cou++;
                }
            }
        }
    }
    if(cou%2==0)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
    }

}