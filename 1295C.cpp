#include<bits/stdc++.h>
using namespace std;
map<char,long long int>mp;
long long int cp[200000][26];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,sizee,j,flag,y,u,ans,l,x,sum=0;
    for(i=1;i<=300000000;i++)
    {
        sum+=i;
    }
    char ch;
    string a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        l=a.size();
        a+=a;
        sizee=a.size();
        flag=0;
        ans=1;
        for(j=sizee-1;j>=0;j--)
        {
            ch='a';
            for(x=0;x<26;x++)
            {
                cp[j][ch-'a']=mp[ch];
                ch++;
            }
            mp[a[j]]=j;
        }
        sizee=b.size();
        for(j=0;j<l;j++)
        {
            if(a[j]==b[0])
            {
              y=j;
              flag=1;
              break;
            }
        }
        if(flag)
        {
            for(j=1;j<sizee;j++)
            {
                u=cp[y][b[j]-'a'];
                if(u==0)
                {
                    flag=0;
                    break;
                }
                if(u>=l)
                {
                   ans++;
                   u%=l;
                }
                y=u;
            }
            if(flag)
            {
                cout<<ans<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
        else
        {
            cout<<-1<<"\n";
        }
        mp.clear();
        memset(cp,0,sizeof(cp));
    }

}