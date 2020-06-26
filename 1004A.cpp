#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k=2;
    double m,f;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n-1;i++)
    {
       f=ara[i+1]-ara[i];
       f/=2.0;
       if(f==m)
       {
           k++;
       }
       else if(f>m)
       {
           k+=2;
       }
    }
    cout<<k<<endl;

}