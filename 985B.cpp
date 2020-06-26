#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i,j,k,flag;
    cin>>n>>m;
    int sum[m],tum[m];
    char ara[n][m];
    for(j=0;j<m;j++)
    {
        sum[j]=0;
        tum[j]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]=='1')
            {
                sum[j]++;
                tum[j]++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<m;j++)
        {
            if(ara[i][j]=='1')
            {
                tum[j]--;
            }
        }
        for(j=0;j<m;j++)
        {
            if(tum[j]==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==0)
        {
            break;
        }
        for(j=0;j<m;j++)
        {
            tum[j]=sum[j];
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}