#include<bits/stdc++.h>
using namespace std;
long long int ara[100000];
vector<long long int>v,l[100001];
long long int bisection(long long int low,long long int high,long long int value)
{
    long long int mid,i,n=high,t,cou;
    while(low<=high)
    {
        cou=0;
        mid=(low+high)/2;
        for(i=0;i<n;i++)
        {
            t=ara[i]+((i+1)*mid);
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        for(i=0;i<mid;i++)
        {
            cou+=v[i];
        }
        if(cou>value)
        {
            high=mid-1;
        }
        else
        {
            l[mid].push_back(cou);
            low=mid+1;
        }
        v.clear();
    }
    return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    k=bisection(0,n,m);
    sort(l[k-1].begin(),l[k-1].end());
    cout<<k-1<<" "<<l[k-1][0]<<"\n";
}