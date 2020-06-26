#include<iostream>
using namespace std;
int main ()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                cout<<m<<" ";
                continue;
            }
            cout<<0<<" ";
        }
        cout<<endl;
    }
}