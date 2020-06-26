#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
set<long long int>s;
set<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,r,i,e,sum;
    cin>>n;
    r=sqrt(n);
    for(i=1;i<=r;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    for(i=0;i<v.size();i++)
    {
        e=n/v[i];
        sum=((2+((e-1)*v[i]))*e)/2;
        s.insert(sum);
    }
    for(l=s.begin();l!=s.end();l++)
    {
        cout<<*l<<" ";
    }
}