#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='-')
        {
            sum--;
        }
        else
        {
            sum++;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<sum<<"\n";
}