#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,k,l,m,flag=0;
    cin>>a>>b>>c;
    cin>>k>>l>>m;
    k-=a;
    if(k<0)
    {
        flag=1;
    }
    else
    {
        k+=l;
        k-=b;
        if(k<0)
        {
            flag=1;
        }
        else
        {
            k+=m;
            k-=c;
            if(k<0)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}