#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,j,p,sum,l,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=-1;
        cin>>a>>b>>c;
        long long int ara[a],cum[a+1];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+a);
        cum[0]=0;
        for(j=1;j<=a;j++)
        {
            cum[j]=cum[j-1]+ara[j-1];
        }
        for(j=0;j<c;j++)
        {
           p=cum[j];
           sum=0;
           if(p<=b)
           {
              sum+=j;
           }
           for(l=j+c-1;l<a;l+=c)
           {
               p+=ara[l];
               if(p<=b)
               {
                   sum+=c;
               }
           }
           ans=max(ans,sum);
        }
        cout<<ans<<"\n";
    }

}