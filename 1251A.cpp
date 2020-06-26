#include<bits/stdc++.h>
using namespace std;
map<char,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,j,flag,cou;
    string s,t;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>s;
        k=s.size();
        for(j=0;j<k;j++)
        {
            if(flag==0)
            {
                flag=1;
                ch=s[j];
                cou=1;
            }
            else
            {
                if(ch==s[j])
                {
                    cou++;
                }
                else
                {
                    if(cou%2!=0)
                    {
                       t+=ch;
                    }
                    cou=1;
                    ch=s[j];
                }
            }
        }
        if(cou%2!=0)
        {
            t+=ch;
        }
        for(j=0;j<t.size();j++)
        {
            mp[t[j]]=1;
        }
        for(j=0;j<26;j++)
        {
            ch=j+'a';
            if(mp[ch]==1)
            {
                cout<<ch;
            }
        }
        cout<<"\n";
        t.clear();
        mp.clear();
    }
}