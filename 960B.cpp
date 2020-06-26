#include<bits/stdc++.h>
using namespace std;
int main  ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,r,i,l,p,ll=0,q,x=0;
    cin>>n>>m>>r;
    long long int ara[n],tak[n],fak[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>tak[i];
    }
    for(i=0; i<n; i++)
    {
        l=ara[i]-tak[i];
        if(l<0)
        {
            l=-l;
        }
        fak[i]=l;
    }
    p=m+r;
    for(i=1; i<=p; i++)
    {
        sort(fak,fak+n);
        reverse(fak,fak+n);
        if(fak[0]==0)
        {
            break;
        }
        fak[0]--;
        x++;
    }
    for(i=0; i<n; i++)
    {
        ll+=(fak[i]*fak[i]);
    }
    if(x!=p)
    {
        x=p-x;
        ll=x%2;
    }
    cout<<ll<<endl;
}