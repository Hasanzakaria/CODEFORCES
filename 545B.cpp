#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int k,i,flag=0;
    k=a.size();
    char c[k+1];
    for(i=0;i<k;i++)
    {
        if(a[i]!=b[i])
        {
           if(flag==0)
           {
              c[i]=a[i];
              flag=1;

           }
           else
           {
               c[i]=b[i];
               flag=0;
           }

        }
        else
        {
            c[i]=a[i];
        }
    }
    c[k]='\0';
    if(flag==0)
    {
        cout<<c;
    }
    else
    {
        cout<<"impossible";
    }
}