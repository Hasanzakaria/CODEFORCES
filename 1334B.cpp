#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,cou,f,sum,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=1;
        sum=0;
        ans=0;
        cin>>a>>b;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+a);
        for(j=a-1;j>=0;j--)
        {
            f=cou*b;
            sum+=ara[j];
            if(sum>=f)
            {
                ans=cou;
            }
            cou++;
        }
        cout<<ans<<"\n";
    }
}