#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,l,f;
    cin>>a>>b;
    if(b==0)
    {
        cout<<0<<" "<<0<<endl;
    }
    else
    {
        l=a-b;
        if(l==0)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            cout<<1<<" ";
            f=2*b;
            if(f<=l)
            {
                cout<<f<<endl;
            }
            else
            {
                cout<<l<<endl;
            }
        }

    }


}