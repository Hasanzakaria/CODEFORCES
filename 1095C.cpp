#include<bits/stdc++.h>
using namespace std;
long long int poww[33],n,k;
int main ()
{
    ios_base::sync_with_stdio(0);
    queue<long long int>q;
    long long int i,l,p,t,o=0,temp;
    cin>>n>>k;
    poww[0]=1;
    for(i=1;i<=32;i++)
    {
        poww[i]=poww[i-1]*2;
    }
    temp=n;
    for(i=32;i>=0;i--)
    {
        p=n/poww[i];
        if(p>0)
        {
            q.push(poww[i]);
            n%=poww[i];
        }
    }
    n=temp;
    if(k>n||k<q.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        p=k-q.size();
        while(!q.empty())
        {
            if(o==p)
            {
                break;
            }
            t=q.front();
            q.pop();
            if(t!=1)
            {
                q.push(t/2);
                q.push(t/2);
                o++;
            }
            else
            {
                q.push(1);
            }
        }
        cout<<"YES"<<endl;
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }

}