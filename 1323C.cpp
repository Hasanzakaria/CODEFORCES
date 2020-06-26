#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,first=0,second=0,cou=0,t,flag=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            first++;
        }
        else
        {
            second++;
        }

    }
    if(first!=second)
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                cou++;
            }
            else
            {
                cou--;
            }
            if(cou<0&&flag==0)
            {
                t=i;
                flag=1;
            }
            if(flag==1&&cou==0)
            {
                ans+=i-t+1;
                flag=0;
            }
        }
        cout<<ans<<"\n";
    }

}