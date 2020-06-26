#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,j;
    char ch;
    string a;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>a;
        k=a.size();
        for(i=0;i<k;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                mp[1]++;
            }
            else if(a[i]>='A'&&a[i]<='Z')
            {
                mp[2]++;
            }
            else
            {
                mp[3]++;
            }
        }
        for(i=0;i<k;i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                if(mp[1]>1&&mp[2]==0)
                {
                    a[i]='A';
                    mp[2]++;
                    mp[1]--;
                }
                else if(mp[1]>1&&mp[3]==0)
                {
                   a[i]='3';
                   mp[3]++;
                   mp[1]--;
                }
            }
            else if(a[i]>='A'&&a[i]<='Z')
            {
                if(mp[2]>1&&mp[1]==0)
                {
                    a[i]='a';
                    mp[2]--;
                    mp[1]++;
                }
                else if(mp[2]>1&&mp[3]==0)
                {
                   a[i]='3';
                   mp[3]++;
                   mp[2]--;
                }
            }
            else
            {
               if(mp[3]>1&&mp[1]==0)
               {
                    a[i]='a';
                    mp[3]--;
                    mp[1]++;
                }
                else if(mp[3]>1&&mp[2]==0)
                {
                   a[i]='A';
                   mp[3]--;
                   mp[2]++;
                }
            }
        }
        cout<<a<<"\n";
        mp.clear();
    }
}