#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,k,r=2000000000,cou=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n-1;i++)
    {
        k=ara[i+1]-ara[i];
        if(k<r)
        {
            r=k;
            cou=1;
        }
        else if(k==r)
        {
           cou++;
        }
    }
    cout<<r<<" "<<cou;
}