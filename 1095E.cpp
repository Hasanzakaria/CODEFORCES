#include<bits/stdc++.h>
using namespace std;
stack<char>s;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,l=0,p;
    cin>>n;
    string a;
    cin>>a;
    for(i=0; i<n; i++)
    {
        if(a[i]=='(')
        {
            s.push('(');
        }
        else
        {
            if(s.size()==0)
            {
                l--;
                if(l==-1)
                {
                    p=i;
                }
            }
            else
            {
                s.pop();
            }
        }
    }
    if(l==-2)
    {
       cout<<p+1<<endl;
    }
    else
    {
        while(!s.empty())
        {
            s.pop();
        }
        l=0;
        for(i=n-1; i>=0; i--)
        {
            if(a[i]==')')
            {
                s.push(')');
            }
            else
            {
                if(s.size()==0)
                {
                    l--;
                    if(l==-1)
                    {
                        p=i;
                    }
                }
                else
                {
                    s.pop();
                }
            }
        }
        if(l==-2)
        {
            cout<<p+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}