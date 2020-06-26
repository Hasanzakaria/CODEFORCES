#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,cou=1;
    cin>>n;
    long long int ara[n][n];
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(j=0; j<n; j++)
            {
               ara[j][i]=cou;
               cou++;
            }
        }
        else
        {
          for(j=n-1;j>=0;j--)
          {
              ara[j][i]=cou;
              cou++;
          }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<"\n";
    }
}