#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    long long int ara[2*n];
    for(i=0;i<2*n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+(2*n));
    if(ara[0]==ara[2*n-1])
    {
        cout<<-1<<"\n";
    }
    else
    {
        for(i=0;i<2*n;i++)
        {
            cout<<ara[i]<<" ";
        }
    }
}