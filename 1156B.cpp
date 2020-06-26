#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,r,u,c,flag,flag1;
    char ch;
    string a,prefix,suffix,ans,ans1;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        flag=0;
        flag1=0;
        cin>>a;
        k=a.size();
        for(j=0; j<k; j++)
        {
            r=a[j]-'a';
            mp[r]++;
        }
        for(j=0; j<26; j+=2)
        {
            ch=j+'a';
            for(u=1; u<=mp[j]; u++)
            {
                prefix+=ch;
            }
        }
        for(j=1; j<26; j+=2)
        {
            ch=j+'a';
            for(u=1; u<=mp[j]; u++)
            {
                suffix+=ch;
            }
        }
        ans=prefix+suffix;
        ans1=suffix+prefix;
        for(j=0;j<k-1;j++)
        {
           c=abs(ans[j]-ans[j+1]);
           if(c==1)
           {
              flag=1;
           }
        }
        for(j=0;j<k-1;j++)
        {
           c=abs(ans1[j]-ans1[j+1]);
           if(c==1)
           {
              flag1=1;
           }
        }
        if(flag&&flag1)
        {
            cout<<"No answer\n";
        }
        else if(flag)
        {
            cout<<ans1<<"\n";
        }
        else
        {
            cout<<ans<<"\n";
        }
        prefix.clear();
        suffix.clear();
        mp.clear();
    }
}