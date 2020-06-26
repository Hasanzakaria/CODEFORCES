#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,j,flag=0;
    string b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a;
        cin>>b;
        for(j=0;j<a-10;j++)
        {
          if(b[j]=='8')
          {
            flag=1;
          }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}