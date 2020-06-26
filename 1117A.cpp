#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,flag=0,cou,ans=1;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        maxx=max(maxx,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==maxx&&flag==0)
        {
            flag=1;
            cou=1;
        }
        else if(ara[i]==maxx&&flag==1)
        {
            cou++;
        }
        else if(ara[i]!=maxx&&flag==1)
        {
            flag=0;
            ans=max(ans,cou);
        }
    }
    if(flag==1)
    {
       ans=max(ans,cou); 
    }    
    cout<<ans<<"\n";

}