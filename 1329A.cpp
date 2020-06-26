#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,sum,flag=0,pos;
    cin>>n>>m;
    long long int ara[m],ans[m];
    pos=n;
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum<n)
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(i=0;i<m;i++)
        {
            ans[i]=i+1;
            if(ans[i]+ara[i]-1>n)
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<-1<<"\n";
        }
        else
        {
            for(i=m-1;i>=0;i--)
            {
              while(ans[i]+ara[i]-1<pos)
              {
                  ans[i]++;
              }
              pos=ans[i]-1;
            }
            if(pos!=0)
            {
                cout<<-1<<"\n";
            }
            else
            {
                for(i=0;i<m;i++)
                {
                    cout<<ans[i]<<" ";
                }
                cout<<"\n";
            }
        }
    }
}