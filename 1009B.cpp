#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    vector<long long int>v;
    vector<long long int>::iterator e;
    string c,g;
    cin>>c;
    long long int k,i,a=0,b=0,cc=0,flag=0,l=0,cou=0,d,j;
    k=c.size();
    for(i=0; i<k; i++)
    {
        if(c[i]=='0')
        {
            a++;
        }
        else if(c[i]=='1')
        {
            b++;
        }
        else
        {
            cc++;
        }
    }
    for(i=0; i<k; i++)
    {
        if(c[i]=='2'&&flag==1)
        {
            v.push_back(l);
            cou+=l;
            l=0;
        }
        else if(c[i]=='2')
        {
            flag=1;
        }
        else if(c[i]=='0'&&flag==1)
        {
            l++;
        }

    }
    if(flag==1)
    {
        v.push_back(l);
        cou+=l;
    }
    for(i=1; i<=(a-cou); i++)
    {
        g+='0';
    }
    for(i=1; i<=b; i++)
    {
        g+='1';
    }
    e=v.begin();
    for(i=1; i<=cc; i++)
    {
        g+='2';
        d=*e;
        for(j=1; j<=d; j++)
        {
            g+='0';
        }
        e++;

    }
    cout<<g<<endl;

}