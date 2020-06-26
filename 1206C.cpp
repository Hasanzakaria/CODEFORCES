#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[1000000];
bool vis[1000000];
void print(long long int f)
{
    queue<long long int>q;
    long long int i,e,l;
    q.push(f);
    vis[f]=1;
    while(!q.empty())
    {
        e=q.front();
        cout<<e<<" ";
        q.pop();
        for(i=0;i<v[e].size();i++)
        {
            l=v[e][i];
            if(vis[l]==0)
            {
                vis[l]=1;
                q.push(l);
            }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,l,i;
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO\n";
    }
    else
    {
        k=n;
        for(i=2;i<=2*n;i+=2)
        {
            l=k+2;
            l=l%(2*n);
            v[i].push_back(l);
            v[l].push_back(i);
            v[i].push_back(k);
            v[k].push_back(i);
            k=l;
        }
        cout<<"YES\n";
        cout<<1<<" ";
        vis[1]=1;
        print(v[1][0]);
    }
}