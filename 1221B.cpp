#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j;
    cin>>n;
    char jak[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0&&j%2==0)
            {
                jak[i][j]='W';
            }
            else if(i%2==0&&j%2!=0)
            {
                 jak[i][j]='B';
            }
            else if(i%2!=0&&j%2==0)
            {
                jak[i][j]='B';
            }
            else
            {
                jak[i][j]='W';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<jak[i][j];
        }
        cout<<"\n";
    }
}