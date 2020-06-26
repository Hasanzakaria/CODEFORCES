#include<bits/stdc++.h>
using namespace std;
long long int dp[10][10][10][10];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    long long int i,j,k,l,p,x,flag,sum;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            for(l=0;l<10;l++)
            {
                for(p=0;p<10;p++)
                {
                    dp[i][j][l][p]=10000000000;
                }
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            for(k=0;k<10;k++)
            {
                for(l=0;l<10;l++)
                {
                    for(p=0;p<10;p++)
                    {
                       if(l==0&&p==0)
                       {
                           dp[i][j][k][k]=10;
                       }
                       else
                       {
                          x=k+(i*l)+(j*p);
                          x%=10;
                          dp[i][j][k][x]=min(dp[i][j][k][x],l+p);
                       }
                    }
                }
            }
        }
    }
    x=s.size();
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            flag=0;
            sum=0;
            for(k=0;k<x-1;k++)
            {
                if(dp[i][j][s[k]-48][s[k+1]-48]==10000000000)
                {
                   flag=1;
                   break;
                }
                sum+=dp[i][j][s[k]-48][s[k+1]-48]-1;
            }
            if(flag)
            {
                cout<<-1<<" ";
            }
            else
            {
                cout<<sum<<" ";
            }
        }
        cout<<"\n";
    }
}