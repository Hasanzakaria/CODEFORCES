#include<bits/stdc++.h>
using namespace std;
long long int func(long long int sum1,long long int sum2,long long int first,long long int second)
{
    long long int amove,bmove,remmove;
    amove=second/2;
    bmove=second/2;
    if(second%2!=0)
    {
        amove++;
    }
    remmove=(first+second);
    remmove-=(amove+bmove);
    sum2+=(9*amove);
    amove=first/2;
    bmove=first/2;
    if(remmove%2!=0)
    {
        bmove++;
    }
    sum1+=(bmove*9);
    if(sum1<sum2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,sum1=0,sum2=0,first=0,second=0,u=0;
    cin>>n;
    string a;
    cin>>a;
    k=a.size();
    for(i=0;i<k/2;i++)
    {
        if(a[i]=='?')
        {
            first++;
        }
        else
        {
            sum1+=(a[i]-48);
        }
    }
    for(i=k/2;i<n;i++)
    {
        if(a[i]=='?')
        {
            second++;
        }
        else
        {
            sum2+=(a[i]-48);
        }
    }
    u=max(u,func(sum1,sum2,first,second));
    u=max(u,func(sum2,sum1,second,first));
    if(u==1)
    {
        cout<<"Monocarp\n";
    }
    else
    {
        cout<<"Bicarp\n";
    }

}