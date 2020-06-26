#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,j,l,p,ans,sum,cou;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        cin>>n;
        long long int ara[n];
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
        }
        for(j=1;j<n;j++)
        {
            if(ara[j]<ara[j-1])
            {
                l=ara[j-1]-ara[j];
                sum=0;
                p=1;
                cou=0;
                while(sum<l)
                {
                    sum+=p;
                    p*=2;
                    cou++;
                }
                ara[j]=ara[j-1];
                ans=max(ans,cou);
            }
        }
        cout<<ans<<"\n";
    }

}