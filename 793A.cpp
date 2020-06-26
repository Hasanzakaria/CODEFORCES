#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,i,k=0,flag=0;
    cin>>a>>b;
    long long int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+a);
    for(i=1;i<a;i++)
    {
       if((ara[i]-ara[0])%b!=0)
       {
           flag=1;
           break;
       }
       k+=(ara[i]-ara[0]);
    }
    if(flag==0)
    {
        cout<<k/b;
    }
    else
    {
        cout<<-1;
    }

}