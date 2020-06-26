#include<bits/stdc++.h>
using namespace std;
vector<long long int>maxx,minn;
vector<long long int>ff;
long long int upper(long long int key)
{
    long long int low=0,high=maxx.size()-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>=maxx[mid])
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
    long long int n,a,i,j,e,r,k,f,sum=0,flag=0,l=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        e=-1;
        r=1e9;
        flag=0;
        for(j=1;j<=a;j++)
        {
            cin>>k;
            ff.push_back(k);
            e=max(k,e);
            r=min(k,r);
        }
        for(j=1;j<ff.size();j++)
        {
            if(ff[j]>ff[j-1])
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            sum+=((2*n)-1)-(2*l);
            l++;
        }
        else
        {
           maxx.push_back(e);
           minn.push_back(r);
        }
        ff.clear();
    }
    sort(maxx.begin(),maxx.end());
    // sort(minn.begin(),minn.end());
    for(i=0;i<minn.size();i++)
    {
        k=minn[i];
        f=upper(k);
        sum+=(maxx.size()-f);
    }
    cout<<sum<<"\n";

}