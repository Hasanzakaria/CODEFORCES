#include<bits/stdc++.h>
using namespace std;
long long int mp[200000][26];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int sizee;
    string a,b;
    cin>>a>>b;
    sizee=a.size();
    a+=a;
    long long int k,i,j,r,f,t,flag=1,cou,u;
    k=a.size();
    for(i=0;i<k;i++)
    {
        for(j=k-1;j>i;j--)
        {
            f=a[j]-'a';
            mp[i][f]=j;
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]==b[0])
        {
            t=i;
            flag=0;
            break;
        }
    }
    k=b.size();
    if(flag)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cou=1;
        for(i=1;i<k;i++)
        {
            f=b[i]-'a';
            u=mp[t][f];
            if(u==0)
            {
                flag=1;
                break;
            }
            else
            {
                if(u>=sizee)
                {
                    cou++;
                    u%=sizee;
                }
                t=u;
            }
        }
        if(flag==1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<cou<<"\n";
        }
    }

}