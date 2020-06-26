#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i;
    char ch;
    string a,b;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(m>9)
        {
            m-=9;
            ch=9+48;
        }
        else
        {
            ch=m+48;
            m=0;
        }
        a+=ch;
    }
    for(i=n-1;i>=0;i--)
    {
        b+=a[i];
    }
    if(b[0]=='0')
    {
        for(i=1;i<n;i++)
        {
            if(b[i]>48)
            {
                b[i]--;
                b[0]='1';
                break;
            }
        }
    }
    if((n>1&&a[0]=='0')||m>0)
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else
    {
        cout<<b<<" "<<a<<endl;
    }


}