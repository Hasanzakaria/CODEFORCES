#include<iostream>
using namespace std;
int main()
{
    int a,i,r=0,c=0,flag=0,cou=0,j;
    string b;
    cin>>a;
    cin>>b;
    for(i=0; i<a; i++)
    {
        if(b[i]=='r')
        {
            r++;
        }
        else
        {
            c++;
        }
    }
    if(b[0]=='r')
    {
        r--;
    }
    else
    {
        c--;
    }

    for(i=1; i<a; i++)
    {
        if(b[i]!=b[i-1])
        {
            if(b[i]=='r')
            {
                r--;
            }
            else
            {
                c--;
            }

        }
        else
        {
            if(b[i]=='b')
            {
                if(r>0)
                {
                    cou++;
                    r--;
                    c--;
                    b[i]='r';
                    for(j=i+1; i<a; i++)
                    {
                        if(b[j]=='r')
                        {
                            b[j]='b';
                        }
                    }
                }
                else
                {
                    cou++;
                    c--;
                    b[i]='r';
                }
            }
            else
            {
                if(c>0)
                {
                    cou++;
                    c--;
                    r--;
                    b[i]='b';
                    for(j=i+1; i<a; i++)
                    {
                        if(b[j]=='b')
                        {
                            b[j]='r';
                        }
                    }
                }
                else
                {
                    cou++;
                    r--;
                    b[i]='b';
                }
            }
        }

    }
    cout<<cou;


}