#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,l,i,j,t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>n>>m;
        char ch[n][m];
        l=n*m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(i%2==0)
                {
                    if(j%2==0)
                    {
                        ch[i][j]='B';
                    }
                    else
                    {
                        ch[i][j]='W';
                    }
                }
                else
                {
                    if(j%2==0)
                    {
                        ch[i][j]='W';
                    }
                    else
                    {
                        ch[i][j]='B';
                    }
                }
            }
        }
        if(l%2==0)
        {
            if(n%2==0&&m%2==0)
            {
                ch[n-1][0]='B';
            }
            else
            {
                ch[n-1][m-1]='B';
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<ch[i][j];
            }
            cout<<"\n";
        }

    }

}