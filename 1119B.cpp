#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,i,u,flag,t,ans,x;
    cin>>a>>b;
    long long int ara[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<a;i++)
    {
        v.push_back(ara[i]);
        sort(v.begin(),v.end());
        flag=0;
        ans=0;
        for(l=v.end()-1;l!=v.begin()-1;l--)
        {
            u=*l;
            if(flag==0)
            {
                flag=1;
                t=u;
                ans+=t;
            }
            else if(flag==1)
            {
                flag=0;
            }
        }
        if(ans<=b)
        {
           x=i;
        }
    }
    cout<<x+1<<endl;

}