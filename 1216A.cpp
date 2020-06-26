#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i+=2)
    {
       if(s[i]=='a'&&s[i+1]=='a')
       {
           cou++;
           s[i+1]='b';
       }
       else if(s[i]=='b'&&s[i+1]=='b')
       {
           cou++;
           s[i+1]='a';
       }
    }
    cout<<cou<<"\n";
    cout<<s<<"\n";
}