#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
map<long long int,long long int>mp[100001];
long long int cou;
bool vis[100001];
void dfs(long long int r)
{
    vector<long long int>::iterator l;
    long long int k;
    if(vis[r])
    {
        return ;
    }
    cou++;
    vis[r]=1;
    for(l=v[r].begin();l!=v[r].end();l++)
    {
        k=*l;
        if(mp[r][k]==0)
        {
            dfs(k);
        }
    }
}
long long int bigmod ( long long int a,long long int p,long long int m )
{
    if ( p == 0 )return 1; // If power is 0 ( a ^ 0 ), return 1

    if ( p & 1 ) // If power is odd
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long int  tmp = bigmod ( a, p / 2, m );
        return ( tmp * tmp ) % m;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,x,y,z,ans;
    cin>>n>>k;
    for(i=1;i<n;i++)
    {
        cin>>x>>y>>z;
        v[x].push_back(y);
        v[y].push_back(x);
        mp[x][y]=z;
        mp[y][x]=z;
    }
    ans=bigmod(n,k,1000000007);
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            cou=0;
            dfs(i);
            ans=((ans%1000000007)-(bigmod(cou,k,1000000007)%1000000007)+1000000007)%1000000007;
        }
    }
    cout<<ans<<"\n";
}