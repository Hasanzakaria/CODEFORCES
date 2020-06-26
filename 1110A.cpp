#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,k,cou=0,i;
    cin>>a>>b;
    long long int ara[b];
    for(i=0; i<b; i++)
    {
        cin>>ara[i];
    }
    if(a%2==0)
    {
        k=ara[b-1];
        if(k%2==0)
        {
            cout<<"even\n";
        }
        else
        {
            cout<<"odd\n";
        }
    }
    else
    {
        for(i=0; i<b; i++)
        {
            if(ara[i]%2!=0)
            {
                cou++;
            }
        }
        if(cou%2==0)
        {
          cout<<"even\n";
        }
        else
        {
            cout<<"odd\n";
        }

    }

}