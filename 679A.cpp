#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ara[4]={4,9,25,49},i,flag=0,cou=0,prime[]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    string a;
    for(i=0;i<4;i++)
    {
        cout<<ara[i]<<endl;
        cin>>a;
        if(a=="yes")
        {
           flag=1;
        }
    }
    for(i=0;i<15;i++)
    {
        cout<<prime[i]<<endl;
        cin>>a;
        if(a=="yes")
        {
           cou++;
        }
    }
    if(flag==1||cou>1)
    {
        cout<<"composite"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }
}