#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,flag=0,t=0,r=0,g=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(ara[i]==ara[i+1]&&g==0)
        {
            flag=1;
        }
        else if(ara[i]<ara[i+1]&&flag==0&&g==0)
        {

        }
        else if(ara[i]>ara[i+1])
        {
            g=1;
        }
        else
        {
            //cout<<i<<endl;
            r=1;
        }
    }
    if(r==0)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }




}