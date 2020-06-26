#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[6],t;
map<long long int,long long int>mp[6],cp[6];
bool check()
{
    int i,j,l,flag=0;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            t.push_back(v[i][j]);
        }
        for(j=0;j<t.size();j++)
        {
            for(l=0;l<t.size();l++)
            {
                if(mp[t[j]][t[l]]==1)
                {
                    flag=1;
                }
            }
        }
        t.clear();
    }
    return flag;
}
bool check1()
{
    int i,j,l,flag=0;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            t.push_back(v[i][j]);
        }
        for(j=0;j<t.size();j++)
        {
            for(l=0;l<t.size();l++)
            {
                if(cp[t[j]][t[l]]==1)
                {
                    flag=1;
                }
            }
        }
        t.clear();
    }
    return flag;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,j,l,f;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a>>b;
       v[a].push_back(b);
       v[b].push_back(a);
       mp[a][b]=1;
       mp[b][a]=1;
    }
    l=check();
    for(i=1;i<=5;i++)
    {
        v[i].clear();
    }
    for(i=1;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            if(mp[i][j]==0)
            {
                v[i].push_back(j);
                v[j].push_back(i);
                cp[i][j]=1;
                cp[j][i]=1;
            }
        }
    }
    f=check1();
    if(l||f)
    {
        cout<<"WIN\n";
    }
    else
    {
        cout<<"FAIL";
    }

}