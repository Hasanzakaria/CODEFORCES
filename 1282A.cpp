#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,r,f,d,sum,temp,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        flag=0;
        cin>>a>>b>>c>>r;
        temp=a;
        a=min(a,b);
        b=max(temp,b);
        f=c+r;
        d=c-r;
        if(d>a&&d<=b)
        {
            sum+=(d-a);
            flag=1;
        }
        if(f<b&&f>=a)
        {
            sum+=(b-f);
            flag=1;
        }
        if(flag==0)
        {
            if(a>=d&&b<=f)
            {
                sum=0;
            }
            else
            {
                sum+=(b-a);
            }

        }
        cout<<sum<<"\n";
    }

}