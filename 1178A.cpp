#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,k,r=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sum/=2;
    sum++;
    k=ara[0]/2;
    v.push_back(1);
    r=r+ara[0];
    for(i=1;i<n;i++)
    {
        if(ara[i]<=k)
        {
            r+=ara[i];
            v.push_back(i+1);
        }
    }
    if(r>=sum)
    {
        cout<<v.size()<<"\n";
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else
    {
        cout<<0<<"\n";
    }

}