#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,k,l;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    k=0;
    l=n-1;
    for(i=1;i<n;i++)
    {
        if(i%2==1)
        {
            l--;
        }
        else
        {
            k++;
        }
    }
    cout<<ara[k]<<endl;

}