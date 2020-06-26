#include<bits/stdc++.h>
using namespace std;
long long int need[10],exist[10000],check[10000][10],n,dip[2000][2010],dir[2000][2010];
long long int dp(long long int pos,long long int sticks)
{
    if(sticks<0)
    {
        return 0;
    }
    if(pos==n)
    {
        if(sticks==0)
        {
            return 1;
        }
        return 0;
    }
    if(dip[pos][sticks]!=-1)
    {
        return dip[pos][sticks];
    }
    long long int j,k=0,flag=0;
    for(j=9;j>=0;j--)
    {
        if(check[pos][j]==0)
        {
            continue;
        }
        k=max(k,dp(pos+1,sticks-need[j]+exist[pos]));
        if(flag==0&&k==1)
        {
            flag=1;
            dir[pos][sticks]=j;
        }
    }
    dip[pos][sticks]=k;
    return dip[pos][sticks];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string>v;
    long long int k,i,cou,j,l,u,pos,stick;
    string s,p;
    v.push_back("1110111");
    v.push_back("0010010");
    v.push_back("1011101");
    v.push_back("1011011");
    v.push_back("0111010");
    v.push_back("1101011");
    v.push_back("1101111");
    v.push_back("1010010");
    v.push_back("1111111");
    v.push_back("1111011");
    for(i=0;i<=9;i++)
    {
        cou=0;
        for(j=0;j<7;j++)
        {
            if(v[i][j]=='1')
            {
                cou++;
            }
        }
        need[i]=cou;

    }
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        cou=0;
        for(j=0;j<7;j++)
        {
            if(p[j]=='1')
            {
               cou++;
            }
        }
        exist[i-1]=cou;
        for(j=0;j<=9;j++)
        {
            if(exist[i-1]>need[j])
            {
               continue;
            }
            check[i-1][j]=1;
            for(l=0;l<7;l++)
            {
                if(p[l]=='1'&&v[j][l]!='1')
                {
                    check[i-1][j]=0;
                }
            }
        }
    }
    memset(dip,-1,sizeof(dip));
    u=dp(0,k);
    if(u==0)
    {
        cout<<-1<<"\n";
    }
    else
    {
      pos=0;
      stick=k;
      while(pos!=n)
      {
          cout<<dir[pos][stick];
          stick-=need[dir[pos][stick]]-exist[pos];
          pos++;
      }
    }
}