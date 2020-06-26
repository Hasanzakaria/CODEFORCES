#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,d,l,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        if(a>b)
        {
            l=a-b;
            if(c<=d)
            {
                cout<<-1<<"\n";
            }
            else
            {
                f=l/(c-d);
                if(l%(c-d)!=0)
                {
                    f++;
                }
                cout<<(f*c)+b<<"\n";
            }
        }
        else
        {
            cout<<b<<"\n";
        }
    }

}