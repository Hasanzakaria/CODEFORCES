#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,flag=0,cou=0,l=0,k,u=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        t=a[i]-48;
        if(t==1&&flag==0)
        {
            flag=1;
        }
        else if(t==1&&flag==1)
        {
            if(l==0)
            {
                l=1;
                k=cou;
            }
            else
            {
                if(k!=cou)
                {
                  u=1;
                }
            }
            cou=0;
        }
        else if(flag==1)
        {
            cou++;
        }
    }
    if(u==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}