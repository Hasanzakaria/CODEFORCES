#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a;
    long long int n,k=0,l=0,i;
    cin>>n;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0')
        {
            k++;
        }
        else
        {
            l++;
        }    
    }
    if(l>0)
    {
        cout<<1;
    }    
    for(i=0;i<k;i++)
    {
        cout<<0;
    }

}