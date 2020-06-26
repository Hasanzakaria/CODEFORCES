#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    long long int r,i,flag=0,t,n,tt,nn,cou=0,mlag=0;
    r=s.size();
    for(i=0; i<r; i++)
    {
        if(s[i]=='['&&flag==0)
        {
            flag=1;
        }
        else if(s[i]==':'&&flag==1)
        {
            flag=2;
            n=i;
            break;
        }
    }
    for(i=r-1; i>=0; i--)
    {
        if(s[i]==']'&&mlag==0)
        {
            mlag=1;
        }
        else if(s[i]==':'&&mlag==1)
        {
            mlag=2;
            nn=i;
            break;
        }
    }
    if(nn<=n||flag!=2||mlag!=2)
    {
        cout<<"-1\n";
    }
    else
    {
       for(i=n;i<=nn;i++)
       {
           if(s[i]=='|')
           {
              cou++;
           }
       }
       cout<<cou+4<<"\n";
    }



}