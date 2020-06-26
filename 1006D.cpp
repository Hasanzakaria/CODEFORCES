#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k,cou=0;
    string a,b;
    cin>>n;
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
           mp[i]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(mp[i]==0)
        {
            k=n-i-1;
            if(mp[k]==0)
            {
                if(i==k)
                {
                    cou++;
                    continue;
                }
                if((a[i]==a[k]||a[i]==b[k])&&(b[i]==a[k]||b[i]==b[k]))
                {

                }
                else
                {
                    if((a[i]==b[k])||(a[k]==b[i])||(b[i]==b[k]))
                    {
                        cou++;
                    }
                    else
                    {
                        cou+=2;
                    }
                }
            }
            else
            {
              cou++;
            }
        }
        mp[i]=1;
        mp[k]=1;
    }
    cout<<cou<<endl;
}