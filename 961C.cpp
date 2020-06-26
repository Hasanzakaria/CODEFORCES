#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,k,cou,f,t,l=40000000;
    cin>>n;
    string a[4][n];
    int white[4],black[4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        cou=0;
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                f=a[i][j][k]-48;
                if((j+k)%2==0&&f==1)
                {
                  cou++;
                }
                else if((j+k)%2==1&&f==0)
                {
                    cou++;
                }
            }
        }
        white[i]=cou;
    }
    for(i=0;i<4;i++)
    {
        cou=0;
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                f=a[i][j][k]-48;
                if((j+k)%2==0&&f==0)
                {
                  cou++;
                }
                else if((j+k)%2==1&&f==1)
                {
                    cou++;
                }
            }
        }
        black[i]=cou;
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            t=white[i]+white[j];
            for(k=0;k<4;k++)
            {
                if(k!=i&&k!=j)
                {
                    t+=black[k];
                }
            }
            l=min(l,t);
        }
    }
    cout<<l<<endl;
}