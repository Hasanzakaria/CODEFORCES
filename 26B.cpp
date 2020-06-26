#include<iostream>
using namespace std;
int main ()
{
    string a;
    cin>>a;
    int k,i,p=0,q=0,t,cou=0;
    k=a.size();
    for(i=0;i<k;i++)
    {
        if(a[i]=='(')
        {
            p++;
        }
        else
        {
            q++;
        }
        t=p-q;
        if(t<0)
        {
            p=0;
            q=0;
        }
        if(t==0)
        {
            cou=cou+2*q;
            p=0;
            q=0;
        }

    }
    if(t!=0)
    {
        cou+=2*q;
    }
    cout<<cou;

}