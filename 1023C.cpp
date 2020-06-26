#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,t,k=0;
    string a;
    cin>>n>>m;
    cin>>a;
    t=m/2;
    for(i=0;i<n;i++)
    {
        if(a[i]=='('&&t>0)
        {
            cout<<"(";
            t--;
            k++;
        }
        else if(a[i]==')'&&k>0)
        {
            cout<<")";
            k--;
        }
    }
}