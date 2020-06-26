#include<iostream>
using namespace std;
int main ()
{
    int n,i,aa=0,c=0,g=0,t=0,k,r,e,f,flag=0;
    string a;
    cin>>n;
    cin>>a;
    if(n%4!=0)
    {
        cout<<"===";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='A')
            {
                aa++;
            }
            else if(a[i]=='C')
            {
                c++;
            }
            else if(a[i]=='G')
            {
                g++;
            }
            else if(a[i]=='T')
            {
                t++;
            }
        }
        k=max(aa,c);
        r=max(k,g);
        e=max(r,t);
        f=4*e;
        if(f>n)
        {
            cout<<"===";
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]=='?'&&aa<e)
                {
                    a[i]='A';
                    aa++;
                }
                else if(a[i]=='?'&&c<e)
                {
                    a[i]='C';
                    c++;
                }
                else if(a[i]=='?'&&g<e)
                {
                    a[i]='G';
                    g++;
                }
                else if(a[i]=='?'&&t<e)
                {
                    a[i]='T';
                    t++;
                }
                else if(a[i]=='?'&&flag==0)
                {
                    a[i]='A';
                    flag=1;
                }
                else if(a[i]=='?'&&flag==1)
                {
                    a[i]='C';
                    flag=2;
                }
                else if(a[i]=='?'&&flag==2)
                {
                    a[i]='G';
                    flag=3;
                }
                else if(a[i]=='?'&&flag==3)
                {
                    a[i]='T';
                    flag=0;
                }

            }
            cout<<a;

        }

    }
}