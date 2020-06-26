#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,a,b,l,f;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(b%3==0)
        {
            k=(b/3)-1;
            l=(k*3)+4;
            f=a%l;
            if(a%l==0)
            {
                cout<<"Bob\n";
            }
            else if(f%3==0&&f/3<=k)
            {
                cout<<"Bob\n";
            }
            else
            {
                cout<<"Alice\n";
            }
        }
        else
        {
            if(a%3==0)
            {
                cout<<"Bob\n";
            }
            else
            {
                cout<<"Alice\n";
            }
        }
    }

}