#include<iostream>
using namespace std;
bool row[100001],column[100001];
int main ()
{
    long long int n,m,i,a,b,ro,co;
    cin>>n>>m;
    ro=n;
    co=n;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        if(row[a]==1&&column[b]==1)
        {
            cout<<ro*co<<" ";
        }
        else if(row[a]==1)
        {
            co--;
            cout<<ro*co<<" ";

        }
        else if(column[b]==1)
        {
            ro--;
            cout<<ro*co<<" ";
        }
        else
        {
            ro--;
            co--;
            cout<<ro*co<<" ";

        }
        row[a]=1;
        column[b]=1;
    }
}