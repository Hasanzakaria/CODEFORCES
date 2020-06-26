#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,a,b,i,k,l,j,flag;
    cin>>n>>a>>b;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n; i++)
    {
        k=i-a;
        l=i+b;
        flag=0;
        if(k<0)
        {
            k=0;
        }
        if(l>=n)
        {
            l=n-1;
        }
        for(j=i-1; j>=k; j--)
        {
            if(ara[i]>ara[j])
            {
                flag=1;
                break;
            }
        }
        for(j=i+1; j<=l; j++)
        {
            if(ara[i]>ara[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i+1<<"\n";
            return 0;
        }
    }
}