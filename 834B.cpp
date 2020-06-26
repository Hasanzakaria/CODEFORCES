#include<bits/stdc++.h>
using namespace std;
int ara[26];
int guard[26];
int main ()
{
    int n,m,i,k,flag=0;
    string a;
    cin>>n>>m;
    cin>>a;
    for(i=0; i<n; i++)
    {
        k=a[i]-'A';
        ara[k]++;
    }
    for(i=0; i<n; i++)
    {
        k=a[i]-'A';
        ara[k]--;
        if(guard[k]==0)
        {
            guard[k]=1;
            m--;
            if(m<0)
            {
                flag=1;
            }
        }
        if(ara[k]==0)
        {
            m++;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }



}