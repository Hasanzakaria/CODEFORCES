#include<bits/stdc++.h>
using namespace std;
long long int tx[]={0,0,1,-1,0};
long long int ty[]={1,-1,0,0,0};
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,x,y,flag,u=0;
    cin>>n;
    char jak[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>jak[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(jak[i][j]=='.')
            {
                flag=0;
                for(k=0;k<5;k++)
                {
                    x=i+tx[k];
                    y=j+ty[k];
                    if(x<0||x>=n||y<0||y>=n||jak[x][y]=='#')
                    {
                       flag=1;
                    }
                }
                if(flag==0)
                {
                    for(k=0;k<5;k++)
                    {
                       x=i+tx[k];
                       y=j+ty[k];
                       jak[x][y]='#';
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(jak[i][j]=='.')
            {
               u=1;
               break;
            }
        }
    }
    if(u==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}