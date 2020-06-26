#include<bits/stdc++.h>
using namespace std;
int main  ()
{
    int k,i,flag=0,t=0,y=0,u=0;
    string a;
    cin>>a;
    k=a.size();
    for(i=0; i<k-1; i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
        }
        if(a[i]=='a')
        {
            t++;
        }
        else if(a[i]=='b')
        {
            y++;
        }
        else if(a[i]=='c')
        {
            u++;
        }
    }
    if(a[i]=='a')
    {
        t++;
    }
    else if(a[i]=='b')
    {
        y++;
    }
    else if(a[i]=='c')
    {
        u++;
    }
    if(u!=t&&u!=y)
    {
        flag=1;
    }
    if(t==0||y==0)
    {
        flag=1;
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}