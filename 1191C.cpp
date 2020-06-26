#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,t,i,r=0,u,j,f=0,cou=0;
    long double k;
    cin>>n>>m>>k;
    long long int ara[m];
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<m;i++)
    {
        t=ceil((ara[i]-f)/k);
        t*=k;
        r++;
        j=i+1;
        while(ara[j]-f<=t&&j<m)
        {
            j++;
            r++;
        }
        i=j-1;
        f=r;
        cou++;
    }
    cout<<cou<<"\n";
}