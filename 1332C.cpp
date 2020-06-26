#include<bits/stdc++.h>
using namespace std;
map<char,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,b,j,k,u,maxx,sum;
    string s,t;
    cin>>tt;
    char ch;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        cin>>s;
        j=0;
        k=b-1;
        sum=0;
        while(j<k)
        {
            maxx=0;
            for(u=j;u<s.size();u+=b)
            {
               t+=s[u];
               mp[s[u]]++;
            }
            for(u=k;u<s.size();u+=b)
            {
                t+=s[u];
                mp[s[u]]++;
            }
            j++;
            k--;
            for(u=0;u<26;u++)
            {
                ch='a'+u;
                maxx=max(maxx,mp[ch]);
            }
            sum+=(t.size()-maxx);
            t.clear();
            mp.clear();
        }
        if(j==k)
        {
            maxx=0;
            for(u=j;u<s.size();u+=b)
            {
               t+=s[u];
               mp[s[u]]++;
            }
            for(u=0;u<26;u++)
            {
                ch='a'+u;
                maxx=max(maxx,mp[ch]);
            }
            sum+=(t.size()-maxx);
            t.clear();
            mp.clear();
        }
        cout<<sum<<"\n";
    }

}