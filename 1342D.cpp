#include<bits/stdc++.h>
using namespace std;
long long int ara[200000];
vector<long long int>v[200000];
int lowerr(int low,int high,int key)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>ara[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,l,x,ans=-1,b,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    long long int temp[k];
    for(i=0;i<k;i++)
    {
        cin>>temp[i];
    }
    sort(ara,ara+n);
    for(i=0;i<k;i++)
    {
        l=lowerr(0,n-1,i+1);
        x=n-l;
        b=x/temp[i];
        if(x%temp[i]!=0)
        {
            b++;
        }
        ans=max(ans,b);
    }
    reverse(ara,ara+n);
    for(i=0;i<n;i++)
    {
        v[i%ans].push_back(ara[i]);
    }
    cout<<ans<<"\n";
    for(i=0;i<ans;i++)
    {
        cout<<v[i].size()<<" ";
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}