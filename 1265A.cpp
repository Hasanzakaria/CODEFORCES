#include<bits/stdc++.h>
using namespace std;
long long int ara[3];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,l,flag;
    char ch;
    string c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>c;
        k=c.size();
        for(j=0;j<k;j++)
        {
            if(c[j]=='?')
            {
                if(j-1>=0)
                {
                   ara[c[j-1]-97]=1;
                }
                if(j+1<k&&c[j+1]!='?')
                {
                    ara[c[j+1]-97]=1;
                }
                for(l=0;l<3;l++)
                {
                    if(ara[l]==0)
                    {
                        ch=l+97;
                        c[j]=ch;
                        break;
                    }
                }
                memset(ara,0,sizeof(ara));
            }
        }
        for(j=0;j<k-1;j++)
        {
            if(c[j]==c[j+1])
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<c<<"\n";
        }
    }
}