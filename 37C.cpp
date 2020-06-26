#include<bits/stdc++.h>
using namespace std;
long long int vis[2000];
vector<string>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=0,flag=0,j;
    string c;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        maxx=max(maxx,ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(vis[ara[i]]==0)
        {
            vis[ara[i]]++;
            for(j=1; j<=ara[i]-1; j++)
            {
                c+='1';
            }
            c+='0';
            v.push_back(c);
        }
        else if(ara[i]==maxx&&vis[ara[i]]==1)
        {
            vis[ara[i]]++;
            for(j=1; j<=ara[i]; j++)
            {
                c+='1';
            }
            v.push_back(c);
        }
        else
        {
            flag=1;
            break;
        }
        c.clear();
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<"\n";
        }
    }
}