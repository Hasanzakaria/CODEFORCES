#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,a,b,c,d,i,l,t;
    cin>>n;
    long long int sum[n];
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
        l=a+b+c+d;
        if(i==1)
        {
           t=l;
        }
        sum[i-1]=l;
    }
    sort(sum,sum+n);
    reverse(sum,sum+n);
    for(i=0;i<n;i++)
    {
        if(sum[i]==t)
        {
            cout<<i+1<<endl;
            break;
        }
    }

}