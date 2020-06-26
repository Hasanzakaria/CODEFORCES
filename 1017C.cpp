#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,f,i,j;
    double l;
    cin>>n;
    l=sqrt(n);
    f=l;
    if(f!=l)
    {
        f++;
    }
    for(i=1;i<=f;i++)
    {
        l=f*i;
        j=1;
        while(j<=f)
        {
            if(l<=n)
            {
                cout<<l<<" ";
            }
            l--;
            j++;
        }
    }



}