#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,j,l,f,t,k,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        p=-1;
        for(j=3;j<=10000;j++)
        {
            l=(j-2)*180;
            if(__gcd(l,j)==j)
            {
                f=l/j;
                t=j-2;
                if(__gcd(f,t)==t)
                {
                    f/=t;
                }
                if(a%f==0)
                {
                    k=a/f;
                    if(k<=j-2)
                    {
                       p=j;
                       break;
                    }
                }
            }
        }
        cout<<p<<"\n";
    }

}