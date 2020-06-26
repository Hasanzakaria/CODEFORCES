#include<iostream>
using namespace std;
int main ()
{
    string c;
    int a,b,k,l,flag=0,i,t=0;
    cin>>a>>b;
    cin>>c;
    for(i=0;i<a;i++)
    {
        if(c[i]=='G')
        {
            k=i;
        }
        if(c[i]=='T')
        {
            l=i;
        }
    }
    if(k<l)
    {
        for(i=k+b;i<=l;i+=b)
        {
            if(c[i]=='#')
            {
                flag=1;
                break;
            }
            else if(c[i]=='T')
            {
                t=1;
                flag=2;
            }

        }
    }
    else
    {
        for(i=k-b;i>=l;i-=b)
        {
            if(c[i]=='#')
            {
                flag=1;
                break;
            }
            else if(c[i]=='T')
            {
                t=1;
                flag=2;
            }
        }
    }
    if(flag==1||flag==0)
    {
        cout<<"NO";
    }
    if(t==1)
    {
        cout<<"YES";
    }

}