#include<bits/stdc++.h>
using namespace std;
long long int ara[1000][1000],check[1000][1000];
long long int bigmod ( long long int a, long long int p, long long int m )
{
    long long int res = 1;
    long long int x = a;

    while ( p )
    {
        if ( p & 1 ) //p is odd
        {
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }

    return res;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,flag,cou=0,k,t,r=0;
    cin>>n>>m;
    long long int row[n];
    for(i=0;i<n;i++)
    {
        cin>>row[i];
    }
    long long int col[m];
    for(i=0;i<m;i++)
    {
        cin>>col[i];
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<row[i];j++)
       {
           ara[i][j]=1;
       }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<col[i];j++)
        {
            ara[j][i]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==0&&flag==0)
            {
               flag=1;
            }
            else if(flag==1)
            {
              check[i][j]++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(ara[j][i]==0&&flag==0)
            {
                flag=1;
            }
            else if(flag==1)
            {
                check[j][i]++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(check[i][j]==2&&ara[i][j]==0)
            {
                cou++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        t=0;
        flag=0;
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==1&&flag==0)
            {
                 t++;
            }
            else
            {
                flag=1;
            }
        }
        if(t!=row[i])
        {
           r=1;
        }
    }
    for(i=0;i<m;i++)
    {
        t=0;
        flag=0;
        for(j=0;j<n;j++)
        {
            if(ara[j][i]==1&&flag==0)
            {
                t++;
            }
            else
            {
                flag=1;
            }
        }
        if(t!=col[i])
        {
            r=1;
        }
    }
    k=bigmod(2,cou,1000000007);
    if(r==1)
    {
        k=0;
    }
    cout<<k<<"\n";


}