#include<bits/stdc++.h>
using namespace std;
long long int ara[200001],n,m;
long long int bisection(long long int low,long long int high)
{
    long long int mid,i,cou,t;
    while(low<=high)
    {
        cou=0;
        mid=(low+high)/2;
        for(i=0;i<n;i++)
        {
            t=ara[i]-(i/mid);
            if(t>0)
            {
                cou+=t;
            }
        }
        if(cou>=m)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,t,sum=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum<m)
    {
        cout<<-1<<"\n";
    }
    else
    {
        sort(ara,ara+n);
        reverse(ara,ara+n);
        t=bisection(1,n);
        cout<<t<<"\n";
    }

}