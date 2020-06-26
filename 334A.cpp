#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,r,k,i,f=0,t=0,j;
    cin>>n;
    int ara[n][n];
    r=n*n;
    k=r/2;
    for(i=1;i<=k;i++)
    {
       ara[f][t]=i;
       f++;
       if(f==n)
       {
           f=0;
           t++;
       }

    }
    f=n-1;
    for(i=k+1;i<=r;i++)
    {
        ara[f][t]=i;
        f--;
        if(f<0)
        {
            f=n-1;
            t++;
        }
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           cout<<ara[i][j]<<" ";
       }
       cout<<endl;
    }




}