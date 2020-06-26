#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,cou=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        k=a[i]-48;
        if((k%2)==0)
        {
          cou+=i+1;
        }
    }
    cout<<cou<<"\n";
}