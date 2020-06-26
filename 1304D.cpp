#include<bits/stdc++.h>
using namespace std;
long long int ara[300000],ara1[300000];
set<long long int>ss;
set<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j,p,m,a,temp;
    cin>>t;
    string s;
    for(i=1; i<=t; i++)
    {
        p=1;
        cin>>a;
        cin>>s;
        temp=0;
        for(j=0; j<a-1; j++)
        {
            if(s[j]=='<')
            {
                ara[j]=p;
                p++;
            }
        }
        m=a;
        for(j=0; j<a; j++)
        {
            if(ara[j]==0)
            {
                ara[j]=m;
                m--;
            }
        }
        p--;
        for(j=0; j<a-1; j++)
        {
            if(s[j]=='<')
            {
                ara1[j]=p;
                p--;
            }
        }
        m=a;
        for(j=0; j<a; j++)
        {
            if(ara1[j]==0)
            {
                ara1[j]=m;
                m--;
            }
        }
        for(j=0; j<a-1; j++)
        {
            if(s[j]=='<')
            {
                ss.insert(ara1[j]);
            }
            else if(s[j]=='>')
            {
                temp=0;
                for(l=ss.begin(); l!=ss.end(); l++)
                {
                    cout<<*l<<" ";
                }
                cout<<ara1[j]<<" ";
                ss.clear();
            }
        }
        for(l=ss.begin(); l!=ss.end(); l++)
        {
            cout<<*l<<" ";
        }
        ss.clear();
        cout<<ara1[a-1]<<"\n";
        for(j=0; j<a; j++)
        {
            ara1[j]=0;
        }
        for(j=0; j<a; j++)
        {
            cout<<ara[j]<<" ";
        }
        cout<<"\n";
        for(j=0; j<a; j++)
        {
            ara[j]=0;
        }
    }

}