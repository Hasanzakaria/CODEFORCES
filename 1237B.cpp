#include<bits/stdc++.h>
using namespace std;
queue<long long int>q;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,p,cou=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        q.push(x);
    }
    for(i=1;i<=n;i++)
    {
        cin>>x;
        while(!q.empty())
        {
            p=q.front();
            if(mp[p]==1)
            {
                q.pop();
                continue;
            }
            if(p==x)
            {
                q.pop();
                break;
            }
            else
            {
                cou++;
                mp[x]=1;
                break;
            }
        }
    }
    cout<<cou<<"\n";

}