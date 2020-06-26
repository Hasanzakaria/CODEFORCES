#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=0,k,flag=0,t=0,sum=0,u;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
        mp[ara[i]]++;
        if(mp[ara[i]]==2)
        {
            cou++;
            k=ara[i];
        }
        else if(mp[ara[i]]>2)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        if(cou>1)
        {
           cout<<"cslnb\n";
        }
        else if(cou==1)
        {
            for(i=0;i<n;i++)
            {
                if(ara[i]==k)
                {
                    mp[ara[i]-1]++;
                    ara[i]--;
                    if(mp[ara[i]]==2||ara[i]<0)
                    {
                       t=1;
                    }
                    break;
                }
            }
        }
        if(t==1)
        {
            cout<<"cslnb\n";
        }
        else if(t==0&&cou<=1)
        {
           u=((n-1)*n)/2;
           sum-=u;
           if(sum%2==1)
           {
               cout<<"sjfnb\n";
           }
           else
           {
               cout<<"cslnb\n";
           }
        }
    }
    else
    {
        cout<<"cslnb\n";
    }
}