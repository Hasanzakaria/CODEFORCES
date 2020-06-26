#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,l,t,cou=0;
    cin>>n;
    int ara[n],tak[n];
    memset(tak,1,sizeof(tak));
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    l=(n-1)-ara[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(i>=l)
        {
            tak[i]=0;
        }
        t=i-ara[i];
        if(t<l)
        {
            l=t;
        }
    }
    for(i=0;i<n;i++)
    {
        if(tak[i])
        {
          cou++;
        }
    }
    cout<<cou<<endl;
}