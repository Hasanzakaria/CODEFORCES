#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,r,i,start=0,endd=0,ans,number,l,sum;
    cin>>n>>r;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    ans=1;
    number=ara[0];
    l=0;
    sum=ara[0];
    while(endd<n)
    {
        if(l<=r)
        {
            endd++;
            if(endd<n)
            {
                sum+=ara[endd];
                l=(ara[endd]*(endd-start+1))-sum;
                if(l<=r)
                {
                    if(endd-start+1>ans)
                    {
                        number=ara[endd];
                        ans=endd-start+1;
                    }
                }
            }

        }
        else
        {
            sum-=ara[start];
            start++;
            l=(ara[endd]*(endd-start+1))-sum;
        }
    }
    cout<<ans<<" "<<number<<"\n";
}