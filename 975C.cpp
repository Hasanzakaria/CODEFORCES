#include<bits/stdc++.h>
using namespace std;
long long int sum[2000000];
long long int binary_searchh(long long int key,long long int high)
{
    long long int low=0,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>=sum[mid])
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
int main()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,l,arrow=0,t;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sum[0]=ara[0];
    for(i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+ara[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>l;
        arrow+=l;
        t=binary_searchh(arrow,n-1);
        if(t==n)
        {
            arrow=0;
            cout<<n<<endl;
        }
        else
        {
            cout<<n-t<<endl;
        }
    }
}