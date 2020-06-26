#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,one=0,two=0,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
        {
           one++;
        }
        else
        {
            two++;
        }
    }
    if(one>0&&two>0)
    {
        cout<<2<<" "<<1<<" ";
        two--;
        one--;
        for(i=1;i<=two;i++)
        {
            cout<<2<<" ";
        }
        for(i=1;i<=one;i++)
        {
            cout<<1<<" ";
        }
    }
    else if(one>0)
    {
        for(i=1;i<=one;i++)
        {
            cout<<1<<" ";
        }
    }
    else
    {
        for(i=1;i<=two;i++)
        {
            cout<<2<<" ";
        }
    }

}