#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,j;
    string s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a>>b>>c;
        if(a>0)
        {
            if(b%2!=0||b==0)
            {
                s+='0';
                for(j=1; j<=a; j++)
                {
                    s+='0';
                }
                for(j=1; j<=b; j++)
                {
                    if(j%2==1)
                    {
                        s+='1';
                    }
                    else
                    {
                        s+='0';
                    }
                }
                for(j=1; j<=c; j++)
                {
                    s+='1';
                }
            }
            else
            {
                s+='1';
                for(j=1;j<b;j++)
                {
                    if(j%2==1)
                    {
                        s+='0';
                    }
                    else
                    {
                        s+='1';
                    }
                }
                for(j=1;j<=a;j++)
                {
                    s+='0';
                }
                for(j=1;j<=c+1;j++)
                {
                    s+='1';
                }
            }
        }
        else if(b>0)
        {
            if(b%2==0)
            {
                s+='1';
                for(j=1; j<=b; j++)
                {
                    if(j%2==1)
                    {
                        s+='0';
                    }
                    else
                    {
                        s+='1';
                    }
                }

            }
            else
            {
                s+='0';
                for(j=1; j<=b; j++)
                {
                    if(j%2==1)
                    {
                        s+='1';
                    }
                    else
                    {
                        s+='0';
                    }
                }
            }
            for(j=1; j<=c; j++)
            {
                s+='1';
            }
        }
        else
        {
            s+='1';
            for(j=1; j<=c; j++)
            {
                s+='1';
            }
        }
        cout<<s<<"\n";
        s.clear();
    }
}