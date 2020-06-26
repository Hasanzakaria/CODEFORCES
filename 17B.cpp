#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[2000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,m,t,r,e,cou=0,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x;
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>t>>r>>e;
        v[r].push_back(e);
    }
    for(i=1;i<=n;i++)
    {
        if(v[i].size()==0)
        {
           cou++;
           continue;
        }
        sort(v[i].begin(),v[i].end());
        sum+=v[i][0];
    }
    if(cou==1)
    {
        cout<<sum<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
}