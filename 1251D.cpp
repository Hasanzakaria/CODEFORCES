#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int s,d;
};
node temp;
long long int a,b;
pair<long long int,long long int>ara[200000];
vector<node>v;
bool cmp(node &x,node &y)
{
    return x.s<y.s;
}
long long int bisection(long long int high)
{
    long long int low=1,mid,j,sum,f,l,t;
    t=a-1;
    t/=2;
    while(low<=high)
    {
        mid=(low+high)/2;
        sum=0;
        f=0;
        l=0;
        for(j=0;j<a;j++)
        {
            if(ara[j].second<mid)
            {
               sum+=ara[j].first;
               f++;
            }
            else if(ara[j].first>mid)
            {
                sum+=ara[j].first;
                l++;
            }
            else
            {
               temp.s=ara[j].first;
               temp.d=ara[j].second;
               v.push_back(temp);
            }
        }
        sort(v.begin(),v.end(),cmp);
        if(f>t)
        {
            high=mid-1;
        }
        else if(l>t)
        {
            low=mid+1;
        }
        else
        {
            j=0;
            while(f!=t)
            {
                temp=v[j];
                sum+=temp.s;
                j++;
                f++;
            }
            sum+=(t-l+1)*mid;
            if(sum<=b)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        v.clear();
    }
    return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j,tt;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>a>>b;
       for(j=0;j<a;j++)
       {
           cin>>ara[j].first>>ara[j].second;
       }
       tt=bisection(1000000000);
       cout<<tt-1<<"\n";
    }
}