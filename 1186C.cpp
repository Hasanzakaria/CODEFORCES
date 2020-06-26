#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    long long int i,k,one=0,l,x,y,cou=0,p=0;
    k=b.size();
    for(i=0; i<k; i++)
    {
        if(b[i]=='1')
        {
            one++;
        }
    }
    l=a.size();
    long long int ara[l];
    ara[0]=a[0]-48;
    for(i=1; i<l; i++)
    {
        ara[i]=ara[i-1]+(a[i]-48);
    }
    for(i=k-1; i<l; i++)
    {
        if(i==k-1)
        {
            x=ara[i]%2;
            y=one%2;
            if(x==y)
            {
                cou++;
            }
        }
        else
        {
            x=ara[i]-ara[p];
            p++;
            x%=2;
            y=one%2;
            if(x==y)
            {
                cou++;
            }
        }
    }
    cout<<cou<<"\n";

}