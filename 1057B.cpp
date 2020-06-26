#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,k,sum,maxx=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            k=(j-i+1)*100;
            sum+=ara[j];
            if(sum>k)
            {
                maxx=max(maxx,j-i+1);
            }
        }
    }
    cout<<maxx<<"\n";
}