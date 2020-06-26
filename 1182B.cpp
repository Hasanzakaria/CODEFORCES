#include<bits/stdc++.h>
using namespace std;
long long int tx[]= {0,0,1,-1};
long long int ty[]= {1,-1,0,0};
map<long long int,long long int>mp[1000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,cou,k,ux,uy,l,flag=0,t=0;
    cin>>n>>m;
    char jak[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>jak[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(jak[i][j]=='*')
            {
                cou=1;
                for(k=0; k<4; k++)
                {
                    ux=i+tx[k];
                    uy=j+ty[k];
                    if(ux>=0&&ux<n&&uy>=0&&uy<m&&jak[ux][uy]=='*')
                    {
                        cou++;
                    }
                }
            }
            if(cou==5)
            {
                t=1;
                mp[i][j]=1;
                for(k=j+1; k<m; k++)
                {
                    if(jak[i][k]=='*')
                    {
                        mp[i][k]=1;
                    }
                    else
                    {
                        break;
                    }
                }
                for(k=j-1; k>=0; k--)
                {
                    if(jak[i][k]=='*')
                    {
                        mp[i][k]=1;
                    }
                    else
                    {
                        break;
                    }
                }
                for(k=i+1;k<n;k++)
                {
                    if(jak[k][j]=='*')
                    {
                        mp[k][j]=1;
                    }
                    else
                    {
                        break;
                    }
                }
                for(k=i-1;k>=0;k--)
                {
                    if(jak[k][j]=='*')
                    {
                        mp[k][j]=1;
                    }
                    else
                    {
                        break;
                    }
                }
                for(k=0;k<n;k++)
                {
                    for(l=0;l<m;l++)
                    {
                        if(mp[k][l]==0&&jak[k][l]=='*')
                        {
                           flag=1;
                        }
                    }
                }
                goto dhaka;
            }
        }
    }
    dhaka:;
    if(t==1&&flag==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}