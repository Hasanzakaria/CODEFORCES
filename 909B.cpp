#include<bits/stdc++.h>
using namespace std;
int ara[101][101];
int main ()
{
    ios_base::sync_with_stdio(0);
    memset(ara,-1,sizeof(ara));
    int n,cou=1,r,l,k,i,j;
    cin>>n;
    ara[0][n]=1;
    for(i=n-1;i>0;i--)
    {
        ara[0][i]=1;
        ara[i][n]=1;
        cou++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(ara[i][j]==-1)
            {
                cou++;
                ara[i][j]=1;
                r=j;
                for(k=i+1;k<n;k++)
                {
                    for(l=k+1;l<=n;l++)
                    {
                        if(ara[k][l]==-1&&k>=r)
                        {
                            ara[k][l]=1;
                            r=l;
                        }
                    }
                }
            }
        }
    }
    cout<<cou<<endl;

}