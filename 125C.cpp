#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int k=2,l=3,n,i,p,j;
    v[0].push_back(1);
    v[0].push_back(2);
    v[1].push_back(1);
    v[1].push_back(3);
    v[2].push_back(2);
    v[2].push_back(3);
    cin>>n;
    while(l+k+1<=n)
    {
        p=l;
        for(i=1;i<=k+1;i++)
        {
            p++;
            v[k+1].push_back(p);
        }
        p=l;
        for(i=0;i<=k;i++)
        {
          p++;
          v[i].push_back(p);
        }
        l=p;
        k++;
    }
    cout<<k+1<<"\n";
    for(i=0;i<=k;i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}