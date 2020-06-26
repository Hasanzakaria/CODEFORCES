#include<stdio.h>
#include<iostream>
using namespace std;
int main ()
{
    char jak[3],k;
    gets(jak);
    int r;
    k=jak[0];
    r=jak[1]-48;
    if((k=='a'||k=='h')&&(r==1||r==8))
    {
        cout<<3;
    }
    else if((k=='a'||k=='h')&&(r>=2&&r<=7))
    {
        cout<<5;
    }
    else if((r==1||r==8)&&(k>='b'&&k<='g'))
    {
        cout<<5;
    }
    else
    {
        cout<<8;
    }
}