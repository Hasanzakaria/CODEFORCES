#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,flag=0,pos;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(ara[i+1]<ara[i]&&flag==0)
        {
            flag=1;
            pos=i+1;
        }
        else if(ara[i+1]<ara[i]&&flag==1)
        {
            flag=2;
            break;
        }
    }
    if(flag==2)
    {
        cout<<-1<<endl;
    }
    else if(flag==0)
    {
        cout<<0<<endl;
    }
    else
    {
       if(ara[n-1]>ara[0])
       {
           cout<<-1<<endl;
       }
       else
       {
           cout<<n-pos<<endl;
       }
    }


}