#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,l=0,p,o=1,r=0,v;
    cin>>n;
    v=n/2;
    int ara[n/2];
    for(i=0;i<(n/2);i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+v);
    for(i=0;i<(n/2);i++)
    {
        p=ara[i]-o;
        if(p<0)
        {
            p=-p;
        }
        l+=p;
        o+=2;
    }
    o=2;
    for(i=0;i<(n/2);i++)
    {
        p=ara[i]-o;
        if(p<0)
        {
            p=-p;
        }
        r+=p;
        o+=2;
    }
    cout<<min(l,r);


}