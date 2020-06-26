#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,t,i,j,f,r;
    cin>>n>>m>>t;
    int ara[n][m],jak[t][3];
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>jak[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ara[i][j]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(jak[i][0]==1)
        {
            f=jak[i][1];
            r=jak[i][2];
            for(j=0;j<m;j++)
            {
                ara[f-1][j]=r;
            }
        }
        else
        {
            f=jak[i][1];
            r=jak[i][2];
            for(j=0;j<n;j++)
            {
                ara[j][f-1]=r;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<ara[i][j]<<" ";
        }
        cout<<"\n";
    }


}