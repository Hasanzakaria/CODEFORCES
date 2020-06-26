#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,f,r,t,flag=0;
    cin>>n;
    long long int ara[n],jak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i]>>jak[i];
    }
    f=min(ara[n-1],jak[n-1]);
    for(i=n-2;i>=0;i--)
    {
        r=max(ara[i],jak[i]);
        t=min(ara[i],jak[i]);
        if(t>=f)
        {
            f=t;
        }
        else if(r>=f)
        {
            f=r;
        }
        else
        {
          flag=1;
          break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}