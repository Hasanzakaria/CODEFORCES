#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int n,i,k,cou=1,ara[1000],t=0,j;
    cin>>n;
    string b;
    cin>>b;
    for(i=0;i<n;i++)
    {
        if(b[i]=='B')
        {
            for(j=i+1;j<n;j++)
            {
                if(b[j]=='B')
                {
                    cou++;
                    if(j==n-1)
                    {
                        goto dhaka;
                    }
                }
                else
                {
                   ara[t++]=cou;
                   cou=1;
                   i=j;
                   break;
                }
            }
        }
    }
    dhaka:;
    if(b[n-1]=='B')
    {
        ara[t++]=cou;
    }
    cout<<t<<endl;
    for(i=0;i<t;i++)
    {
        cout<<ara[i]<<" ";
    }

}