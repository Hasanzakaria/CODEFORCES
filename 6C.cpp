#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k=0,l=0,j,alice=0,bob=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    i=0;
    j=n-1;
    while(i<=j)
    {
        if(k>l)
        {
            l+=ara[j];
            j--;
            bob++;
        }
        else if(l>k)
        {
            k+=ara[i];
            i++;
            alice++;
        }
        else
        {
            if(i==j)
            {
               alice++;
               i++;
            }
            else
            {
                k+=ara[i];
                l+=ara[j];
                i++;
                j--;
                alice++;
                bob++;
            }
        }
    }
    cout<<alice<<" "<<bob<<"\n";
}