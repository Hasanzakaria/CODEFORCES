#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,a,b,c,l,sum;
    cin>>n;
    long long int ara[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }
    cin>>k;
    for(i=1;i<=k;i++)
    {
        cin>>a>>b>>c;
        a--;
        b--;
        sum=0;
        for(j=0;j<n;j++)
        {
            for(l=0;l<n;l++)
            {
                ara[j][l]=min(ara[j][l],ara[j][a]+c+ara[b][l]);
                ara[j][l]=min(ara[j][l],ara[j][b]+c+ara[a][l]);
                sum+=ara[j][l];
            }
        }
        cout<<sum/2<<" ";
    }


}