#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,l,p,t,i;
    cin>>a>>b;
    a--;
    if(a<=b)
    {
        cout<<a<<"\n";
    }
    else
    {
        a-=b;
        p=b;
        t=2;
        for(i=1;i<=a;i++)
        {
            p+=t;
            t++;
        }
        cout<<p<<"\n";
    }


}