#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main ()
{
    int n,i,b=-3;
    cin>>n;
    pair<int,int>ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i].first>>ara[i].second;
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(b<=ara[i].second)
        {
            b=ara[i].second;
        }
        else
        {
            b=ara[i].first;
        }
    }
    cout<<b;
}