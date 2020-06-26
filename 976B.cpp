#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int p,q,r,k,l,t,f,m,n;
    cin>>p>>q>>r;
    k=1;
    l=1;
    if(r>=p)
    {
        t=p-1;
        k=p;
        r-=t;
    }
    else
    {
        k+=r;
        r=0;
        cout<<k<<" "<<l<<endl;
        return 0;
    }
    if(r>=q)
    {
        t=q-1;
        l=q;
        r-=t;
    }
    else
    {
        l+=r;
        r=0;
        cout<<k<<" "<<l<<endl;
        return 0;
    }
    f=r/(q-1);
    k-=f;
    r-=(f*(q-1));
    if(f%2==0)
    {
        if(r>0)
        {
            k--;
            r--;
            l=q-r;
        }
        else
        {
            l=q;
        }
    }
    else
    {
        if(r>0)
        {
            k--;
            r--;
            l=2+r;
        }
        else
        {
            l=2;
        }
    }
    cout<<k<<" "<<l<<endl;
}