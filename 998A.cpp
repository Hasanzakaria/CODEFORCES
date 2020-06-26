#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=0;i<n;i++)
    {
        cin>>pq[i].first;
        pq[i].second=i+1;
    }
    sort(pq,pq+n);
    if(n<2)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(n==2)
        {
            if(pq[0].first==pq[1].first)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<1<<endl;
            }
        }
        else
        {
            cout<<1<<endl;
            cout<<pq[0].second<<endl;
        }
    }
}