#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,o=0,j,flag,cou,f,ans=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i])
        {
            o++;
        }
    }
    for(i=0;i<=o;i++)
    {
        flag=0;
        cou=0;
        f=0;
        for(j=0;j<n;j++)
        {
            if(ara[j]==0&&flag==0)
            {
                cou++;
            }
            else if(ara[j])
            {
                if(f==i)
                {
                  flag=1;
                  cou++;
                }
                else
                {
                    f++;
                }

            }
        }
        ans=max(ans,cou);

    }
    cout<<ans<<endl;
}