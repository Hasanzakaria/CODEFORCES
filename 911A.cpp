#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k=1000000001,flag=0,l,t,minn=1000000010;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]<k)
        {
            k=ara[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(flag==1&&ara[i]==k)
        {
            t=i-l;
            if(t<minn)
            {
                minn=t;
            }
            l=i;
        }
        else if(ara[i]==k)
        {
            flag=1;
            l=i;
        }
    }
    cout<<minn<<endl;
}