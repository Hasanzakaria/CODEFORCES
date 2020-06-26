#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,j,k=0,t=0,sum=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    i=0;
    j=n-1;
    k=ara[i];
    t=ara[j];
    while(i<j)
    {
        if(t==k)
        {
            sum=t;
            i++;
            if(i<j)
            {
                k+=ara[i];
            }
        }
        else if(k>t)
        {
            j--;
            if(i<j)
            {
                t+=ara[j];
            }
        }
        else
        {
            i++;
            if(i<j)
            {
                k+=ara[i];
            }
        }
    }

    cout<<sum<<endl;
}