#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    long long int k,i,f,j,ans,maxx=-1;
    k=a.size();
    for(i=0;i<=k;i++)
    {
        ans=1;
        for(j=0;j<i;j++)
        {
            f=a[j]-48;
            ans*=f;
        }
        for(j=i;j<k;j++)
        {
            f=a[j]-48;
            if(j==i)
            {
               ans*=f-1;
               if(ans==0)
               {
                   ans=1;
               }
            }
            else
            {
                ans*=9;
            }
        }
        maxx=max(maxx,ans);
    }
    cout<<maxx<<"\n";
}