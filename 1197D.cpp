#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,maxx=0,sum=0,f;
    double m,u=0;
    cin>>n>>m>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=ara[i];
        if(sum<0)
        {
            sum=0;
            u=i+1;
        }
        f=sum-(k*ceil((i-u+1)/m));
        maxx=max(maxx,f);
    }
    cout<<maxx<<"\n";
}