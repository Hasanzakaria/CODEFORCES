#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,l,f=1,x;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    l=ara[n/2];
    for(i=(n/2)+1;i<n;i++)
    {
        x=f*(ara[i]-l);
        if(m>=x)
        {
            m-=x;
        }
        else
        {
           l+=(m/f);
           m=0;
           break;
        }
        f++;
        l=ara[i];
    }
    l+=(m/f);
    cout<<l<<"\n";
 
}