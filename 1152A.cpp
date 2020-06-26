#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,even1=0,odd1=0,even2=0,odd2=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            even1++;
        }
        else
        {
            odd1++;
        }
    }
    for(i=1;i<=m;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            even2++;
        }
        else
        {
            odd2++;
        }
    }
    cout<<min(even1,odd2)+min(odd1,even2)<<"\n";

}