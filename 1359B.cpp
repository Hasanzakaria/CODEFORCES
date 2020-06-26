#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,m,x,y,j,k,cou,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        cin>>n>>m>>x>>y;
        char ch[n][m];
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                cin>>ch[j][k];
            }
        }
        y=min(2*x,y);
        for(j=0;j<n;j++)
        {
            cou=0;
            for(k=0;k<m;k++)
            {
                if(ch[j][k]=='.')
                {
                    cou++;
                }
                else
                {
                   ans+=((cou/2)*y);
                   ans+=((cou%2)*x);
                   cou=0;
                }
            }
            ans+=((cou/2)*y);
            ans+=((cou%2)*x);
        }
        cout<<ans<<"\n";
    }
}