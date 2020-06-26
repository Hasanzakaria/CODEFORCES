#include<bits/stdc++.h>
using namespace std;
vector<int>ara[1001];
vector<int>::iterator y;
map<int,int>mp;
void divisors(int r)
{
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=r;j+=i)
        {
            ara[j].push_back(i);
        }
    }
}
int main()
{

    int n,i,j,f,flag=0,a,b;
    cin>>n;
    divisors(n);
    for(i=1,j=n-1;i<j;i++,j--)
    {
        flag=0;
        for(y=ara[i].begin();y!=ara[i].end();y++)
        {
            mp[*y]=1;
        }
        for(y=ara[j].begin();y!=ara[j].end();y++)
        {
            if(*y==1)
            {
                continue;
            }
            if(mp[*y]==1)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            a=i;
            b=j;
        }
        mp.clear();
    }
    cout<<a<<" "<<b<<endl;
}