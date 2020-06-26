#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,l,i,j,k;
    char ch,th;
    string c,r;
    cin>>n;
    v.push_back("a1");
    for(i=1; i<=7; i++)
    {
        ch=i+'a';
        c+=ch;
        ch='1';
        c+=ch;
        v.push_back(c);
        c.clear();
    }
    for(i=7; i>=2; i--)
    {
        ch='h';
        c+=ch;
        ch=i+48;
        c+=ch;
        v.push_back(c);
        c.clear();
    }
    for(i=1; i<=7; i++)
    {
        if((i%2)==1)
        {
            ch='g';
            for(j=1; j<=7; j++)
            {
                c+=ch;
                th=ch;
                ch=i+1+48;
                c+=ch;
                v.push_back(c);
                c.clear();
                ch=th;
                ch--;
            }

        }
        else
        {
            ch='a';
            for(j=1; j<=7; j++)
            {
                c+=ch;
                th=ch;
                ch=i+1+48;
                c+=ch;
                v.push_back(c);
                c.clear();
                ch=th;
                ch++;
            }

        }
    }
    v.push_back("h8");
    k=n-2;
    r=v[k];
    if(r[0]=='h')
    {
        if(r=="h1")
        {
            for(i=0; i<=k; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<"h2 ";
            cout<<"h8\n";
        }
        else if(r=="h2")
        {
            for(i=0; i<k; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<"g3 g8 h8\n";
        }
        else
        {
            for(i=0; i<=k; i++)
            {
                cout<<v[i]<<" ";
            }
            ch=r[1];
            ch--;
            cout<<"h"<<ch<<" ";
            cout<<"h8\n";
        }
    }
    else if(r[1]=='8')
    {
        for(i=0; i<=k; i++)
        {
            cout<<v[i]<<" ";
        }
        ch=r[0];
        ch--;
        cout<<ch<<"8 ";
        cout<<"h8\n";
    }
    else
    {
        for(i=0; i<=k; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<r[0]<<"8 ";
        cout<<"h8\n";
    }
}