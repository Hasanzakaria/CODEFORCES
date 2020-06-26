#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,l,flag=0;
    cin>>a>>b;
    bool ara[a][b],jak[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            cin>>ara[i][j];
            jak[i][j]=1;
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(!ara[i][j])
            {
                for(k=0; k<a; k++)
                {
                    jak[k][j]=0;
                }
                for(k=0; k<b; k++)
                {
                    jak[i][k]=0;
                }
            }
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            l=0;
            for(k=0; k<a; k++)
            {
                if(jak[k][j]==1)
                {
                   l=1;
                }
            }
            for(k=0;k<b;k++)
            {
                if(jak[i][k]==1)
                {
                    l=1;
                }
            }
            if(ara[i][j]!=l)
            {
               flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                cout<<jak[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}