#include<iostream>
using namespace std;
int main ()
{
    int a,i,b,k=0,flag=0;
    string c;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>b;
        cin>>c;
        if(c=="North")
        {
            k-=b;
        }
        else if(c=="South")
        {
            k+=b;
        }
        else if(c=="East"&&(k==0||k==20000))
        {
            flag=1;
        }
        else if(c=="West"&&(k==0||k==20000))
        {
            flag=1;
        }
        if(k<0||k>20000)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO";
    }
    else
    {
        if(k==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }

}