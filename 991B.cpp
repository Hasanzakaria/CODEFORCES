#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,cou=0,i;
    double f,t;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        f+=ara[i];
    }
    sort(ara,ara+n);
    t=f/n;
    if(t>=4.5)
    {
        cout<<0<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            f-=ara[i];
            f+=5;
            t=f/n;
            cou++;
            if(t>=4.5)
            {
                break;
            }
        }
        cout<<cou<<endl;
    }

}