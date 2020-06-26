#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,cou,ans,l,k,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=0;
        cin>>a>>b;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=1;j<b-1;j++)
        {
            if(ara[j]>ara[j-1]&&ara[j]>ara[j+1])
            {
               cou++;
            }
        }
        ans=cou;
        l=1;
        k=0;
        p=b-1;
        while(1)
        {
           k++;
           p++;
           if(p==a)
           {
               break;
           }
           if(ara[k]>ara[k-1]&&ara[k]>ara[k+1])
           {
               cou--;
           }
           if(ara[p-1]>ara[p-2]&&ara[p-1]>ara[p])
           {
               cou++;
           }
           if(cou>ans)
           {
               ans=cou;
               l=k+1;
           }
        }
        cout<<ans+1<<" "<<l<<"\n";

    }


}