#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,l,r=0;
    string a;
    char t;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    l=97;
    for(i=1;i<=26;i++)
    {
        t=l;
        if(mp[t]>1)
        {
            r=1;
        }
        l++;
    }
    if(n==1||r==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


}