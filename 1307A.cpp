#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        ans=ara[0];
        for(j=1;j<a;j++)
        {
            while(ara[j])
            {
               if(b>=j)
               {
                   ans++;
                   ara[j]--;
                   b-=j;
               }
               else
               {
                   break;
               }
            }
        }
        cout<<ans<<"\n";
    }

}