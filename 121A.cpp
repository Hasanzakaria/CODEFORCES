#include<bits/stdc++.h>
using namespace std;
long long int k;
long long int ara[19];
vector<long long int>v;
vector<long long int>::iterator y;
void permu(long long int pos)
{
    if(pos==k+1)
    {
        long long int i,p=1,l=0;
        for(i=k;i>=1;i--)
        {
            l+=(ara[i]*p);
            p=p*10;
        }
        v.push_back(l);
        return ;

    }
    ara[pos]=4;
    permu(pos+1);
    ara[pos]=7;
    permu(pos+1);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,f,p=0,flag=0,r;
    cin>>n>>m;
    for(k=1;k<=11;k++)
    {
        permu(1);
    }
    sort(v.begin(),v.end());
    for(y=v.begin();y!=v.end();y++)
    {
       f=*y;
       if(n<=f&&m<=f&&flag==0)
       {
           p+=(m-n+1)*f;
           flag=2;
       }
       else if(n<=f&&flag==0)
       {
           flag=1;
           p+=((f-n)+1)*f;
           r=f;
       }
       else if(m<=f&&flag==1)
       {
           flag=2;
           p+=(m-r)*f;
       }
       else if(flag==1)
       {
           p+=(f-r)*f;
           r=f;
       }
    }
    cout<<p<<endl;

}