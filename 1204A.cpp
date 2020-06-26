#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    long long int k,i,cou=0,flag=0,ans=0;
    k=s.size();
    for(i=k-1;i>=0;i--)
    {
        if(i!=0&&s[i]=='1')
        {
            flag=1;
        }
        if(i==0&&flag&&cou==0)
        {
            ans++;
            break;
        }
        else if(i==0&&flag==0)
        {
            break;
        }
        if(cou==0)
        {
            ans++;
        }
        cou++;
        cou%=2;
    }
    cout<<ans<<"\n";
}