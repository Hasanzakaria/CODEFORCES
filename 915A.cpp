#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i;
    cin>>n>>m;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    reverse(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(m%ara[i]==0)
        {
            cout<<m/ara[i]<<endl;
            break;
        }
    }

}