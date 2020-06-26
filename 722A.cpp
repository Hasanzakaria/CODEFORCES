#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    if(n==24)
    {
        if(a[3]>'5')
        {
            a[3]='5';
        }
        if(a[0]>'2')
        {
            a[0]='1';
        }
        else if(a[0]=='2')
        {
            if(a[1]>'3')
            {
                a[1]='3';
            }
        }
    }
    else
    {
        if(a[3]>'5')
        {
            a[3]='5';
        }
        if(a[0]=='0')
        {
            if(a[1]=='0')
            {
                a[1]='1';
            }
        }
        if(a[0]=='1')
        {
            if(a[1]>'2')
            {
                a[1]='2';
            }
        }
        else if(a[0]>'1'&&a[1]!='0')
        {
            a[0]='0';
        }
        else if(a[0]>'1'&&a[1]=='0')
        {
            a[0]='1';
        }

    }
    cout<<a;
}