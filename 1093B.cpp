#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,k,j,flag,f;
    string a,b;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a;
        k=a.size();
        for(j=0;j<k-1;j++)
        {
            if(a[j]!=a[j+1])
            {
               flag=1;
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            f=0;
            b=a;
            reverse(a.begin(),a.end());
            if(a==b)
            {
                for(j=0;j<k-1;j++)
                {
                    if(a[j]!=a[j+1]&&f==0)
                    {
                      ch=a[j];
                      a[j]=a[j+1];
                      a[j+1]=ch;
                      f=1;
                    }
                }
                cout<<a<<endl;
            }
            else
            {
                cout<<a<<endl;
            }
        }
    }


}