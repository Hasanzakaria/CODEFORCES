#include<bits/stdc++.h>
using namespace std;
long long int first[1000000],second[1000000],third[1000000];
long long int lower(long long int low,long long int high,long long int key,long long int ara[])
{
    long long int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>ara[mid])
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
long long int upper(long long int low,long long int high,long long int key,long long int ara[])
{
    long long int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>=ara[mid])
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
long long int solve(long long int x,long long int y,long long int z)
{
    return ((x-y)*(x-y))+((y-z)*(y-z))+((z-x)*(z-x));
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,j,small,big,l,k,ans;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        ans=5e18;
        cin>>a>>b>>c;
        for(j=0; j<a; j++)
        {
            cin>>first[j];
        }
        for(j=0; j<b; j++)
        {
            cin>>second[j];
        }
        for(j=0; j<c; j++)
        {
            cin>>third[j];
        }
        sort(first,first+a);
        sort(second,second+b);
        sort(third,third+c);
        for(j=0; j<a; j++)
        {
            small=-1;
            big=-1;
            l=lower(0,b-1,first[j],second);
            k=upper(0,c-1,first[j],third);
            if(second[l]<=first[j]&&l<b&&l>=0)
            {
                small=second[l];
            }
            else if(l-1>=0&&l-1<b)
            {
                small=second[l-1];
            }
            if(k-1>=0&&third[k-1]>=first[j]&&k-1<c)
            {
                big=third[k-1];
            }
            else if(k<c&&k>=0)
            {
                big=third[k];
            }
            if(small!=-1&&big!=-1)
            {
                ans=min(ans,solve(small,first[j],big));
            }
            small=-1;
            big=-1;
            l=lower(0,c-1,first[j],third);
            k=upper(0,b-1,first[j],second);
            if(third[l]<=first[j]&&l<c&&l>=0)
            {
                small=third[l];
            }
            else if(l-1>=0&&l-1<c)
            {
                small=third[l-1];
            }
            if(k-1>=0&&second[k-1]>=first[j]&&k-1<b)
            {
                big=second[k-1];
            }
            else if(k<b&&k>=0)
            {
                big=second[k];
            }
            if(small!=-1&&big!=-1)
            {
                ans=min(ans,solve(small,first[j],big));
            }
        }
        for(j=0; j<b; j++)
        {
            small=-1;
            big=-1;
            l=lower(0,a-1,second[j],first);
            k=upper(0,c-1,second[j],third);
            if(first[l]<=second[j]&&l<a&&l>=0)
            {
                small=first[l];
            }
            else if(l-1>=0&&l-1<a)
            {
                small=first[l-1];
            }
            if(k-1>=0&&third[k-1]>=second[j]&&k-1<c)
            {
                big=third[k-1];
            }
            else if(k<c&&k>=0)
            {
                big=third[k];
            }
            if(small!=-1&&big!=-1)
            {
                ans=min(ans,solve(small,second[j],big));
            }
            small=-1;
            big=-1;
            l=lower(0,c-1,second[j],third);
            k=upper(0,a-1,second[j],first);
            if(third[l]<=second[j]&&l<c&&l>=0)
            {
                small=third[l];
            }
            else if(l-1>=0&&l-1<c)
            {
                small=third[l-1];
            }
            if(k-1>=0&&first[k-1]>=second[j]&&k-1<a)
            {
                big=first[k-1];
            }
            else if(k<a&&k>=0)
            {
                big=first[k];
            }
            if(small!=-1&&big!=-1)
            {
                ans=min(ans,solve(small,second[j],big));
            }
        }
        for(j=0; j<c; j++)
        {
            small=-1;
            big=-1;
            l=lower(0,a-1,third[j],first);
            k=upper(0,b-1,third[j],second);
            if(first[l]<=third[j]&&l<a&&l>=0)
            {
                small=first[l];
            }
            else if(l-1>=0&&l-1<a)
            {
                small=first[l-1];
            }
            if(k-1>=0&&second[k-1]>=third[j]&&k-1<b)
            {
                big=second[k-1];
            }
            else if(k<b&&k>=0)
            {
                big=second[k];
            }
            if(small!=-1&&big!=-1)
            {
                ans=min(ans,solve(small,third[j],big));
            }
            small=-1;
            big=-1;
            l=lower(0,b-1,third[j],second);
            k=upper(0,a-1,third[j],first);
            if(second[l]<=third[j]&&l<b&&l>=0)
            {
                small=second[l];
            }
            else if(l-1>=0&&l-1<b)
            {
                small=second[l-1];
            }
            if(k-1>=0&&first[k-1]>=third[j]&&k-1<a)
            {
                big=first[k-1];
            }
            else if(k<a&&k>=0)
            {
                big=first[k];
            }
            if(small!=-1&&big!=-1)
            {
                ans=min(ans,solve(small,third[j],big));
            }
        }
        cout<<ans<<"\n";
    }

}