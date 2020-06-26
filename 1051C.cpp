#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=0,l,t,flag=0;
    char ch;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    for(i=0; i<n; i++)
    {
        if(mp[ara[i]]==1)
        {
            cou++;
        }
    }
    l=cou;
    if(cou%2==0)
    {
        cout<<"YES\n";
        for(i=0; i<n; i++)
        {
            if(mp[ara[i]]>1)
            {
                cout<<'A';
            }
            else if(cou>(l/2))
            {
                cout<<'A';
                cou--;
            }
            else
            {
                cout<<'B';
                cou--;
            }
        }
        cout<<"\n";
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(mp[ara[i]]>2)
            {
                cou++;
                t=ara[i];
                break;
            }
        }
        l=cou;
        if(cou%2==0)
        {
            cout<<"YES\n";
            for(i=0; i<n; i++)
            {
                if(t==ara[i]&&flag==0)
                {
                    flag=1;
                    if(cou>(l/2))
                    {
                       cout<<'A';
                       cou--;
                       ch='B';
                    }
                    else
                    {
                        cout<<'B';
                        cou--;
                        ch='A';
                    }

                }
                else if(t==ara[i]&&flag==1)
                {
                    cout<<ch;
                }
                else if(mp[ara[i]]>1)
                {
                    cout<<'B';
                }
                else if(cou>(l/2))
                {
                    cout<<'A';
                    cou--;
                }
                else
                {
                    cout<<'B';
                    cou--;
                }
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
}