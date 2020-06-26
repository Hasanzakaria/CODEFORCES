#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,t,ans;
    cin>>a>>b>>c;
    t=a/3;
    t=min(t,b/2);
    t=min(t,c/2);
    ans=(t*7);
    a-=(t*3);
    b-=(t*2);
    c-=(t*2);
    if(a==0)
    {
        a++;
    }
    if(b==0)
    {
        b++;
    }
    if(c==0)
    {
        c++;

    }
    if(a+b+c-ans!=0)
    {
        if(a>2)
        {
            ans+=2;
        }
        else
        {
            ans+=a;
        }
        if(b>1)
        {
            ans+=1;
        }
        else
        {
            ans+=b;
        }
        if(c>1)
        {
            ans+=1;
        }
        else
        {
            ans+=c;
        }
    }
    cout<<ans<<endl;

}