#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,k,j,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        u=0;
        cin>>a;
        char ch[a][a];
        for(j=0;j<a;j++)
        {
            for(k=0;k<a;k++)
            {
                cin>>ch[j][k];
            }
        }
        for(j=0;j<a;j++)
        {
            for(k=0;k<a;k++)
            {
                if(ch[j][k]=='1')
                {
                    if(k+1<a&&j+1<a&&ch[j][k+1]=='0'&&ch[j+1][k]=='0')
                    {
                       u=1;
                    }
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
}