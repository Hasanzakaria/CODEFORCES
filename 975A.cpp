#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
map<string,int>cp;
int main ()
{
    string a;
    int n,i,j,k,cou=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string b;
        cin>>a;
        j=a.size();
        for(k=0;k<j;k++)
        {
            if(mp[a[k]]==0)
            {
                mp[a[k]]=1;
                b+=a[k];
            }
        }
        sort(b.begin(),b.end());
        if(cp[b]==0)
        {
            cou++;
            cp[b]=1;
        }
        mp.clear();

    }
    cout<<cou<<endl;
}