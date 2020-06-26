#include<iostream>
#include<stdio.h>
using namespace std;
int main ()
{
    int n,i,k,j,cou=0,flag=0;
    string b;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&ara[i]);
    }
    for(i=1;i<=n;i++)
    {
        cou=0;
        getline(cin,b);
        k=b.size();
        for(j=0;j<k;j++)
        {
            if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u'||b[j]=='y')
            {
                cou++;
            }
        }
        if(cou!=ara[i-1])
        {
            flag=1;
        }


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