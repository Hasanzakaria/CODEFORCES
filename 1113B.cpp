#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,l,j,minn;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    minn=sum;
    sort(ara,ara+n);
    for(i=n-1;i>0;i--)
    {
        l=ara[i];
        for(j=1;j<=l;j++)
        {
            if(l%j==0)
            {
               minn=min(minn,sum-ara[0]-l+(l/j)+(j*ara[0]));
            }
        }
    }
    cout<<minn<<"\n";

}