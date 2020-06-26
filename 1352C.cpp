#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,b,f,t,sum,temp;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        sum=0;
        temp=b;
        while(1)
        {
            t=b/a;
            if(t==0)
            {
                break;
            }
            sum+=t;
            b%=a;
            b+=t;
        }
        cout<<sum+temp<<"\n";
    }
}