#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,flag=0;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    char b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
           if(a[i][j]!=b[i][j])
           {
               a[i][j]=a[i][j]^1;
               a[i][j+1]=a[i][j+1]^1;
               a[i+1][j]=a[i+1][j]^1;
               a[i+1][j+1]=a[i+1][j+1]^1;
           }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=b[i][j])
            {
               flag=1;
               break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}