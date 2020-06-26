#include<iostream>
using namespace std;
int main ()
{
    int n,m,i,flag=0,j;
    char ch;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ch;
            if(ch=='C'||ch=='M'||ch=='Y')
            {
               flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"#Black&White";
    }
    else
    {
        cout<<"#Color";
    }

}