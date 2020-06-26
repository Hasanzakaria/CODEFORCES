#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,k,l,sum,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=0;
        cin>>a>>b;
        k=b/a;
        l=b%a;
        for(j=1;j<=a;j++)
        {
            if(l>0)
            {
              sum+=((k+1)*(k+1));
              l--;
            }
            else
            {
                sum+=(k*k);
            }
        }
        cout<<sum<<"\n";

    }

}