#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
long long int ara1[100000][40];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,j,i,cou,f,u=0,g;
    cin>>n;
    long long int ara[n],check[n];
    for(j=0;j<n;j++)
    {
        cin>>ara[j];
        check[j]=ara[j];
    }
    for(j=0;j<n;j++)
    {
        cou=0;
        while(ara[j])
        {
            v.push_back(ara[j]%2);
            ara[j]/=2;
        }
        for(i=0;i<v.size();i++)
        {
            ara1[j][cou]=v[i];
            cou++;
        }
        v.clear();
    }
    for(i=39;i>=0;i--)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(ara1[j][i]==1)
            {
                f++;
                u=j;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    cout<<check[u]<<" ";
    for(j=0;j<n;j++)
    {
        if(j==u)
        {
            continue;
        }
        cout<<check[j]<<" ";
    }
}