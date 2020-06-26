#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,cou=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        maxx=max(maxx,ara[i]);
        if(i+1==maxx)
        {
            cou++;
        }
    }
    cout<<cou<<"\n";
}