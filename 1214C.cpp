#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,o=0,c=0,cou=0,flag=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            o++;
        }
        else
        {
            c++;
        }
    }
    if(o==c)
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
            if(cou==-1&&flag==0)
            {
                flag=1;
                cou=0;
            }
            if(flag==1&&cou==-1)
            {
                flag=2;
                cou=0;
            }
        }
        if(flag==0||(flag==1&&cou==1))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    else
    {
        cout<<"No\n";
    }
}