#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,j,even,odd,x,t;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        even=0;
        odd=0;
        cin>>a>>x;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if(ara[j]%2==0)
            {
               even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd>0)
        {
            x--;
            odd--;
            while(x)
            {
                t=x;
                if(x>=2)
                {
                   if(odd>=2)
                   {
                      x-=2;
                      odd-=2;
                   }
                   else if(even>0)
                   {
                     x--;
                     even--;
                   }
                }
                else
                {
                    if(even>0)
                    {
                       x--;
                       even--;
                    }
                }
                if(t==x)
                {
                    break;
                }
            }
            if(x==0)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
}