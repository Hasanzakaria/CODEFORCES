#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int n,k,r,i;
    cin>>n>>k>>r;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    if(k%2!=0)
    {
        for(i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                continue;
            }
            ara[i]=ara[i]^r;
        }
        sort(ara,ara+n);

    }
    cout<<ara[n-1]<<" "<<ara[0];

}