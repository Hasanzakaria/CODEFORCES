#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    long long int k,i,current=0,previous=0,ans=0;
    k=a.size();
    for(i=0;i<k;i++)
    {
        if(a[i]=='0')
        {
            current++;
        }
        if(b[i]=='0')
        {
            current++;
        }
        if(current==0)
        {
            previous=0;
        }
        else if(current==1)
        {
            if(previous==2)
            {
                ans++;
                previous=0;
            }
            else
            {
                previous=1;
            }
        }
        else
        {
            if(previous==0)
            {
                previous=2;
            }
            else if(previous==1)
            {
                ans++;
                previous=0;
            }
            else
            {
                ans++;
                previous=1;
            }
        }
        current=0;
    }
    cout<<ans<<"\n";
}