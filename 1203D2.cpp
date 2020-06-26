#include<bits/stdc++.h>
using namespace std;
long long int ara[300000],k;
pair<long long int,long long int>pq[300000];
long long int upperr_bound(long long int x)
{
    long long int low=0,high=k-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(pq[mid].first<=x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin>>s>>t;
    long long int l,i,f,ans1,u,ans2,cou=0,p,e,ans3=0,fi;
    k=s.size();
    l=t.size();
    u=l;
    l--;
    for(i=k-1;i>=0;i--)
    {
        if(s[i]==t[l])
        {
            l--;
        }
        if(l==-1)
        {
            f=i;
            break;
        }
    }
    ans1=f;
    l=0;
    for(i=0;i<k;i++)
    {
        if(s[i]==t[l])
        {
            l++;
        }
        if(l==u)
        {
            f=i;
            break;
        }
    }
    ans2=k-1-f;
    l=0;
    for(i=0;i<k;i++)
    {
        if(s[i]==t[l])
        {
            l++;
            cou++;
        }
        ara[i]=cou;
    }
    l=u-1;
    cou=0;
    for(i=k-1;i>=0;i--)
    {
        if(s[i]==t[l])
        {
            l--;
            cou++;
        }
        pq[i].first=cou;
        pq[i].second=i;
    }
    sort(pq,pq+k);
    for(i=0;i<k;i++)
    {
        p=u-ara[i];
        if(p==0)
        {
            break;
        }
        e=upperr_bound(p);
        ans3=max(pq[e-1].second-i-1,ans3);
    }
    fi=max(ans1,ans2);
    fi=max(fi,ans3);
    cout<<fi<<"\n";


}