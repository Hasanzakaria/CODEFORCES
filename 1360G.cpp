#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,m,a,b,j,k,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m>>a>>b;
        long long int ara[n][m];
        f=0;
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                ara[j][k]=0;
            }
        }
        if(n*a==b*m)
        {
            for(j=0;j<n;j++)
            {
                for(k=1;k<=a;k++)
                {
                   ara[j][f]=1;
                   f++;
                   f%=m;
                }
            }
            cout<<"YES\n";
            for(j=0;j<n;j++)
            {
                for(k=0;k<m;k++)
                {
                    cout<<ara[j][k];
                }
                cout<<"\n";
            }

        }
        else
        {
            cout<<"NO\n";
        }
    }
}