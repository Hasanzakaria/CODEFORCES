#include<bits/stdc++.h>
using namespace std;
int ara[4];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j,k,u,ans;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        j=0;
        k=-1;
        ans=0;
        while(1)
        {
            k++;
            if(k==s.size())
            {
                break;
            }
            u=s[k]-48;
            ara[u]++;
            if(ara[1]>0&&ara[2]>0&&ara[3]>0)
            {
                while(ara[1]>0&&ara[2]>0&&ara[3]>0)
                {
                   if(ans==0)
                   {
                       ans=k-j+1;
                   }
                   else
                   {
                       ans=min(ans,k-j+1);
                   }
                   u=s[j]-48;
                   ara[u]--;
                   j++;
                }
            }
        }
        cout<<ans<<"\n";
        memset(ara,0,sizeof(ara));
    }
}