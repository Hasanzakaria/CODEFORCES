#include<bits/stdc++.h>
using namespace std;
long long int poww[31],ara[100001],y,aa,c,d;
long long int dividee(long long int a,long long int b)
{
    long long int mid,f,l,p,o;
    if(a==b)
    {
        p=upper_bound(ara,ara+y,b)-lower_bound(ara,ara+y,a);
        if(p==0)
        {
            o=c;
        }
        else
        {
            o=p*d*(b-a+1);
        }
        return o;
    }
    mid=(a+b)/2;
    p=upper_bound(ara,ara+y,b)-lower_bound(ara,ara+y,a);
    if(p==0)
    {
        o=c;
        return o;
    }
    else
    {
        o=p*d*(b-a+1);
    }
    f=dividee(a,mid);
    l=dividee(mid+1,b);
    return min(o,f+l);

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,t,r=1;
    cin>>aa>>y>>c>>d;
    poww[0]=1;
    for(i=1; i<=aa; i++)
    {
        poww[i]=poww[i-1]*2;
    }
    for(i=0; i<y; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+y);
    t=dividee(r,poww[aa]);
    cout<<t<<"\n";

}