#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,c,k,t,i,f,r;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        f=a%c;
        if(f==0)
        {
            r=a-c;
        }
        else
        {
            r=a-f;
        }
        if(r<=0)
        {
            k=b%c;
            if(k==0)
            {
                cout<<b+c<<"\n";
            }
            else
            {
                cout<<b+(c-k)<<"\n";
            }
        }
        else
        {
          cout<<c<<"\n";
        }


    }



}