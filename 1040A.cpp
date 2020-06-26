#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,i,j,r,flag=0,ans=0;
    cin>>a>>b>>c;
    int ara[a];
    for(i=0;i<a;i++)
    {
      cin>>ara[i];
    }
    r=min(b,c);
    for(i=0,j=a-1;i<=((a-1)/2);i++,j--)
    {
        if(ara[i]!=ara[j]&&ara[i]!=2&&ara[j]!=2)
        {
            flag=1;
        }
        else if(ara[i]!=ara[j]&&ara[i]==2)
        {
            if(ara[j]==0)
            {
               ans+=b;
            }
            else
            {
                ans+=c;
            }
        }
        else if(ara[i]!=ara[j]&&ara[j]==2)
        {
            if(ara[i]==0)
            {
                ans+=b;
            }
            else
            {
                ans+=c;
            }
        }
        else if(ara[i]==ara[j]&&ara[i]==2&&i!=j)
        {
            ans+=2*r;
        }
        else if(ara[i]==ara[j]&&ara[i]==2&&i==j)
        {
            ans+=r;
        }
    }
    if(flag==0)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

}