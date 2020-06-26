#include<iostream>
using namespace std;
int main ()
{
    int a,b,i,j,flag=0,miny,maxy,t=0,l=0,f=0,r=0,rr=0,c=0;
    cin>>a>>b;
    char ara[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>ara[i][j];
            if(rr==1)
            {
                continue;
            }
            if(ara[i][j]=='X'&&flag==0)
            {
                flag=1;
                miny=j;
            }
            if(ara[i][j]=='X'&&flag==1)
            {
                maxy=j;
                r=1;
            }
        }
        if(r==1)
        {
          rr=1;
        }
    }
    for(i=0;i<a;i++)
    {
        flag=0;
        c=0;
        for(j=0;j<b;j++)
        {
            if(ara[i][j]=='X'&&(j<miny||j>maxy))
            {
               t=1;
            }
            else if(ara[i][j]=='.'&&(j>=miny&&j<=maxy))
            {
                c=1;
            }
            else if(ara[i][j]=='X'&&(j>=miny&&j<=maxy)&&f==1)
            {
                t=1;
            }
            else if(ara[i][j]=='X'&&(j>=miny&&j<=maxy))
            {
               flag=1;
            }
        }
        if(c==1&&flag==1)
        {
            t=1;
        }
        if(flag==1)
        {
           l=1;
        }
        else if(flag==0&&l==1)
        {
          f=1;
        }

    }
    if(l==0)
    {
        t=1;
    }
    if(t==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}