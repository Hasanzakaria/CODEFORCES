#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,t,cou=0;
    cin>>n>>m;
    long long int ara[n],jak[m];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>jak[i];
    }
    t=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]<=jak[t])
        {
            t++;
            cou++;
        }
        if(t==m)
        {
            break;
        }
    }
    cout<<cou<<endl;

}