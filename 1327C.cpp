#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k,i,l,j,t;
    cin>>n>>m>>k;
    for(i=1; i<=2*k; i++)
    {
        cin>>l>>t;
    }
    cout<<n-1+m-1+n*m-1<<"\n";
    for(i=1; i<n; i++)
    {
        cout<<"U";
    }
    for(i=1; i<m; i++)
    {
        cout<<"L";
    }
    for(i=1; i<=n; i++)
    {
        if(i!=1)
        {
            cout<<"D";
        }
        if(i%2==0)
        {
            for(j=m-1; j>=1; j--)
            {
                cout<<"L";
            }
        }
        else
        {
            for(j=1; j<m; j++)
            {
                cout<<"R";
            }
        }


    }

}