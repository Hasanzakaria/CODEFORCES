#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k,l,x,y,cou=0,flag=0;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    cin>>m;
    long long int jak[m];
    for(i=0; i<m; i++)
    {
        cin>>jak[i];
    }
    k=ara[0];
    l=jak[0];
    x=0;
    y=0;
    while(x<n&&y<m)
    {
        if(k==l)
        {
            cou++;
            x++;
            y++;
            if(x<n)
            {
                k=ara[x];
            }
            else
            {
                k=0;
            }
            if(y<m)
            {
                l=jak[y];
            }
            else
            {
                l=0;
            }
        }
        else if(k<l)
        {
            x++;
            if(x<n)
            {
                k+=ara[x];
            }
 
        }
        else
        {
            y++;
            if(y<m)
            {
                l+=jak[y];
            }
        }
    }
    if(k==0&&l==0)
    {
        cout<<cou<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
}