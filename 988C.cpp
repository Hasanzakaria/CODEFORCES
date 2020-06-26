#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,b,j,sum=0,t,seq1,index1,seq2,index2,flag=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>b;
        sum=0;
        long long int ara[b];
        for(j=0;j<b;j++)
        {
            cin>>ara[j];
            sum+=ara[j];
        }
        for(j=0;j<b;j++)
        {
            t=sum-ara[j];
            if(mp[t]==0)
            {
                mp[t]=i;
                cp[t]=j+1;
            }
            else if(mp[t]!=i)
            {
                seq1=mp[t];
                index1=cp[t];
                seq2=i;
                index2=j+1;
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        cout<<seq1<<" "<<index1<<"\n";
        cout<<seq2<<" "<<index2<<"\n";
    }
}