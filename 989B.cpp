#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,p,k,i,flag=0;
    string a;
    cin>>n>>p;
    cin>>a;
    k=a.size();
    for(i=0;i<k-p;i++)
    {
        if(a[i]=='.'&&a[i+p]=='.')
        {
            a[i]='1';
            a[i+p]='0';
            flag=1;
        }
        else if(a[i]=='.')
        {
            if(a[i+p]=='1')
            {
                a[i]='0';
            }
            else
            {
                a[i]='1';
            }
            flag=1;
        }
        else if(a[i+p]=='.')
        {
            if(a[i]=='1')
            {
                a[i+p]='0';
            }
            else
            {
                a[i+p]='1';
            }
            flag=1;
        }
        else if(a[i]!=a[i+p])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        for(i=0;i<k;i++)
        {
            if(a[i]=='.')
            {
                cout<<1;
            }
            else
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}