#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,c;
    cin>>s;
    long long int i,t,k=0,f=0,sum=0;
    t=s.size();
    for(i=0;i<t-1;i++)
    {
        if(s[i]==s[i+1]&&s[i]=='v')
        {
            c+="w";
            f++;
        }
        if(s[i]=='o')
        {
            c+=s[i];
        }
    }
    if(s[t-1]=='o')
    {
        c+='o';
    }
    t=c.size();
    for(i=0;i<t;i++)
    {
        if(c[i]=='w')
        {
            f--;
            k++;
        }
        else
        {
           sum+=(k*f);
        }
    }
    cout<<sum<<"\n";

}