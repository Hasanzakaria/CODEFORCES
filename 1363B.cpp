#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,l,cou,ans;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        k=s.size();
        ans=k;
        for(j=0;j<=k;j++)
        {
            cou=0;
            for(l=j;l<k;l++)
            {
                if(s[l]=='0')
                {
                    cou++;
                }
            }
            for(l=j-1;l>=0;l--)
            {
                if(s[l]=='1')
                {
                    cou++;
                }
            }
            ans=min(ans,cou);
            cou=0;
            for(l=j;l<k;l++)
            {
                if(s[l]=='1')
                {
                    cou++;
                }
            }
            for(l=j-1;l>=0;l--)
            {
                if(s[l]=='0')
                {
                    cou++;
                }
            }
            ans=min(ans,cou);
        }
        cout<<ans<<"\n";
    }
}