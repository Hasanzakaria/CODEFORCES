#include<bits/stdc++.h>
using namespace std;
long long int degree[10000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,x,j,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>x;
        for(j=1;j<n;j++)
        {
            cin>>a>>b;
            degree[a]++;
            degree[b]++;
        }
        if(degree[x]<=1)
        {
            cout<<"Ayush\n";
        }
        else
        {
            if(n%2==0)
            {
                cout<<"Ayush\n";
            }
            else
            {
              cout<<"Ashish\n";
            }
        }
        memset(degree,0,sizeof(degree));
    }
}