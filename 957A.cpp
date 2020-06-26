#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a;
    int n,i,flag=0,t=0;
    cin>>n;
    cin>>a;
    for(i=0;i<n-1;i++)
    {
      if(a[i]==a[i+1]&&a[i]!='?')
      {
        flag=1;
      }
    }
    if(flag==0)
    {
        for(i=0;i<n;i++)
        {
            if((i==0||i==n-1)&&a[i]=='?')
            {
                t=1;
            }
            else if(a[i]=='?')
            {
                if(a[i+1]==a[i-1]&&(i+1)<n&&(i-1)>=0&&a[i+1]!='?')
                {
                    t=1;
                }
                else if(a[i]==a[i+1]&&(i+1)<n)
                {
                    t=1;
                }

            }
        }
        if(t==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else
    {
        cout<<"No"<<endl;
    }
}