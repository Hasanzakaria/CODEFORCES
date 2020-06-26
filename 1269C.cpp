#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,j,flag=0,i,u,f=0;
    cin>>n>>k;
    string s,p;
    cin>>s;
    p=s;
    for(i=0; i<k; i++)
    {
        for(j=i; j<s.size(); j+=k)
        {
            p[j]=p[i];
        }
    }
    for(i=0; i<n; i++)
    {
        if(p[i]<s[i]&&f==0)
        {
            flag=1;
            break;
        }
        else if(p[i]>s[i])
        {
            f=1;
        }
    }
    if(flag)
    {
        for(i=k-1; i>=0; i--)
        {
            if(s[i]!='9')
            {
                s[i]++;
                u=i;
                break;
            }
        }
        for(i=u+1; i<k; i++)
        {
            s[i]='0';
        }
        for(i=0; i<k; i++)
        {
            for(j=i; j<s.size(); j+=k)
            {
                s[j]=s[i];
            }
        }
        cout<<s.size()<<"\n";
        cout<<s<<"\n";

    }
    else
    {
        cout<<p.size()<<"\n";
        cout<<p<<"\n";
    }

}