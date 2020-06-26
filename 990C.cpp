#include<bits/stdc++.h>
using namespace std;
vector<string>v;
vector<string>::iterator p;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,j,k,a,cou=0;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a=0;
        cin>>s;
        v.push_back(s);
        k=s.size();
        for(j=0;j<k;j++)
        {
            if(s[j]=='(')
            {
              a++;
            }
            else
            {
                a--;
            }
        }
        mp[a]++;
    }
    for(p=v.begin();p!=v.end();p++)
    {
        a=0;
        s=*p;
        k=s.size();
        for(j=0;j<k;j++)
        {
            if(s[j]=='(')
            {
                a++;
            }
            else
            {
                a--;
            }
        }
        if(a>=0)
        {
            a=-a;
            cou+=mp[a];
        }
    }
    cout<<cou<<endl;
}