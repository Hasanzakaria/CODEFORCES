#include<bits/stdc++.h>
using namespace std;
long long int ara[3][100001];
int tx[]= {1,1,1},ty[]= {0,1,-1};
int tx1[]= {-1,-1,-1},ty1[]= {0,1,-1};
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,a,b,j,g,h,flag,cou=0;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b;
        if(a==1)
        {
            if(ara[a][b]==1)
            {
                ara[a][b]=0;
                for(j=0; j<3; j++)
                {
                    g=a+tx[j];
                    h=b+ty[j];
                    if(h>=1&&h<=n)
                    {
                        if(ara[g][h]==1)
                        {
                            cou--;
                        }
                    }
                }
            }
            else
            {
                ara[a][b]=1;
                for(j=0; j<3; j++)
                {
                    g=a+tx[j];
                    h=b+ty[j];
                    if(h>=1&&h<=n)
                    {
                        if(ara[g][h]==1)
                        {
                            flag=1;
                            cou++;
                        }
                    }
                }
            }
        }
        else
        {
            if(ara[a][b]==1)
            {
                ara[a][b]=0;
                for(j=0; j<3; j++)
                {
                    g=a+tx1[j];
                    h=b+ty1[j];
                    if(h>=1&&h<=n)
                    {
                        if(ara[g][h]==1)
                        {
                            flag=1;
                            cou--;
                        }
                    }
                }
            }
            else
            {
                ara[a][b]=1;
                for(j=0; j<3; j++)
                {
                    g=a+tx1[j];
                    h=b+ty1[j];
                    if(h>=1&&h<=n)
                    {
                        if(ara[g][h]==1)
                        {
                            flag=1;
                            cou++;
                        }
                    }
                }
            }
        }
        //cout<<cou<<endl;
        if(cou==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

}