#include<bits/stdc++.h>
using namespace std;
vector<long long int>ans;
vector<long long int>v;
vector<long long int>::iterator l;
long long int binary(long long int r)
{
     vector<long long int>::iterator ll;
     long long int sum=0;
    while(r%2!=0||r/2!=0)
    {
        v.push_back(r%2);
        r/=2;
    }
    long long int y=1;
    for(ll=v.begin();ll!=v.end();ll++)
    {
        sum+=(1)*y;
        y*=2;
    }
    return sum;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,t,cou=0,f;
    cin>>a;
    while(a)
    {
        t=binary(a);
        a=a^t;
        if(a==0)
        {
            break;
        }
        cou++;
        ans.push_back(v.size());
        v.clear();
        t=binary(a);
        f=a^t;
        if(f==0)
        {
            break;
        }
        v.clear();
        a++;
        cou++;
    }
    cout<<cou<<"\n";
    for(l=ans.begin();l!=ans.end();l++)
    {
        cout<<*l<<" ";
    }


}