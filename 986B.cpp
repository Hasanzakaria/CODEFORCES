#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,temp,cou=0;
    cin>>n;
    long long int ara[n],tak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]=i;
        tak[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        if(tak[i]!=ara[i])
        {
           t=mp[tak[i]];
           temp=tak[t];
           tak[t]=tak[i];
           tak[i]=temp;
           i--;
           cou++;
        }
    }
    t=(3*n)-cou;
    if(t%2==0)
    {
        cout<<"Petr\n";
    }
    else
    {
        cout<<"Um_nik\n";
    }

}