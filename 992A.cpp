#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,c,cou=0;
    map<int,int>mp;
    cin>>n;
    mp[0]=1;
    for(i=1;i<=n;i++)
    {
        cin>>c;
        if(mp[c]==0)
        {
            mp[c]=1;
            cou++;
        }
    }
    cout<<cou<<endl;

}