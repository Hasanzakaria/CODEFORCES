#include<bits/stdc++.h>
using namespace std;
map<char,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    long long int k,i,maxx=0,t,cou=0,ans,j;
    char ch1,ch2;
    k=s.size();
    for(i=0;i<k;i++)
    {
        mp[s[i]]++;
        maxx=max(maxx,mp[s[i]]);
    }
    maxx=max(maxx,(maxx*(maxx-1))/2);
    for(i=0;i<26;i++)
    {
        for(j=i+1;j<26;j++)
        {
            ch1=i+'a';
            ch2=j+'a';
            cou=0;
            ans=0;
            for(t=0;t<k;t++)
            {
               if(s[t]==ch2)
                {
                   cou++;
                }
                else if(s[t]==ch1)
                {
                   ans+=cou;
                }
            }
            maxx=max(maxx,ans);
            cou=0;
            ans=0;
            for(t=k-1;t>=0;t--)
            {
                if(s[t]==ch2)
                {
                   cou++;
                }
                else if(s[t]==ch1)
                {
                   ans+=cou;
                }
            }
            maxx=max(maxx,ans);
        }
    }
    cout<<maxx<<"\n";

}