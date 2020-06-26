#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,odd=0,even=0,k=0,l=0,f,t,p,e,ans=0;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(i%2==0)
        {
            odd+=ara[i];
        }
        else
        {
            even+=ara[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            f=odd-ara[i];
            t=f-k;
            p=l+t;
            e=k+(even-l);
            if(p==e)
            {
                ans++;
            }
            k+=ara[i];
        }
        else
        {
            f=even-ara[i];
            t=f-l;
            p=k+t;
            e=l+(odd-k);
            if(p==e)
            {
                ans++;
            }
            l+=ara[i];
        }
    }
    cout<<ans<<"\n";
}