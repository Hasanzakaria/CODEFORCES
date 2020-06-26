#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int f,i,j,cou=0,k;
    cin>>f;
    long long int ans[f][f];
    for(i=0;i<f;i+=2)
    {
        for(k=0;k<f;k+=2)
        {
            ans[i][k]=cou;
            cou++;
            ans[i][k+1]=cou;
            cou++;
            ans[i+1][k]=cou;
            cou++;
            ans[i+1][k+1]=cou;
            cou++;
        }
    }
    for(i=0;i<f;i++)
    {
        for(j=0;j<f;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

}