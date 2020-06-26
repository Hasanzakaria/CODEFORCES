#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,l,j,sum=-1;
    cin>>n;
    long long int sizee[n];
    for(i=0; i<n; i++)
    {
        cin>>sizee[i];
    }
    long long int cost[n];
    for(i=0; i<n; i++)
    {
        cin>>cost[i];
    }
    for(i=0; i<n; i++)
    {
        k=-1;
        l=-1;
        for(j=i-1; j>=0; j--)
        {
            if(sizee[j]<sizee[i])
            {
                if(k==-1)
                {
                    k=cost[j];
                }
                else
                {
                    k=min(k,cost[j]);
                }
            }
        }
        for(j=i+1; j<n; j++)
        {
            if(sizee[j]>sizee[i])
            {
                if(l==-1)
                {
                    l=cost[j];
                }
                else
                {
                    l=min(l,cost[j]);
                }
            }
        }
        if(k!=-1&&l!=-1)
        {
            if(sum==-1)
            {
                sum=cost[i]+k+l;
            }
            else
            {
               sum=min(sum,cost[i]+k+l);
            }
        }
    }
    cout<<sum<<"\n";
}