#include<bits/stdc++.h>
using namespace std;
long long int k;
string a;
long long int maxx=0;
map<long long int,long long int>mp;
void recursion(long long int f,vector<long long int>g)
{
    if(f==k)
    {
        if(g.size()>0&&g[0]==0)
        {
            return ;
        }
        long long int t=1,s=0,b;
        for(int i=g.size()-1; i>=0; i--)
        {
            s+=(g[i]*t);
            t*=10;
        }
        if(mp[s]==1)
        {
            b=g.size();
            maxx=max(maxx,b);
        }
        return;
    }
    long long int r;
    recursion(f+1,g);
    r=a[f]-48;
    g.push_back(r);
    recursion(f+1,g);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i;
    cin>>a;
    k=a.size();
    vector<long long int>r;
    for(i=1; i<=44723; i++)
    {
        mp[i*i]=1;
    }
    recursion(0,r);
    if(maxx==0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<k-maxx<<"\n";
    }
}