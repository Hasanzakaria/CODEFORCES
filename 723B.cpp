#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int n,i,j,cou=0,k=0,flag=0,t=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]==')')
                {
                    i=j-1;
                    break;
                }
            }
        }
        else if(a[i]=='_'||a[i]==')')
        {
            for(j=i+1;j<n;j++)
            {
                if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
                {
                   cou++;
                   if(j==n-1)
                   {
                       goto dhaka;
                   }
                }
                else
                {
                    if(cou>k)
                    {
                        k=cou;
                    }
                    cou=0;
                    i=j-1;
                    break;
                }
            }

        }
        else
        {
           for(j=i;j<n;j++)
           {
               if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
               {
                   cou++;
                   if(j==n-1)
                   {
                       goto haka;
                   } 

               }
               else
               {
                   if(cou>k)
                   {
                       k=cou;
                   }
                   cou=0;
                   i=j-1;
                   break;
               }
           }
        }
    }
    dhaka:;
    haka:;
    if((a[n-1]>='a'&&a[n-1]<='z')||(a[n-1]>='A'&&a[n-1]<='Z'))
    {
       if(cou>k)
       {
           k=cou;
       }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]!='_'&&a[j]!=')'&&flag==0)
                {
                   t++;
                   flag=1;
                }
                else if(a[j]=='_')
                {
                    flag=0;
                }
                else if(a[j]==')')
                {
                    flag=0;
                    i=j-1;
                    break;
                }
            }
        }
    }
    cout<<k<<" "<<t;

}