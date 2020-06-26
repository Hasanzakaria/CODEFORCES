#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,na=0,nb=0,nc=0,nd=0,l,u,x,vv,ans1=-1,ans2=-1,ans3=-1,ans4=-1;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1'&&b[i]=='1')
        {
            nd++;
        }
        else if(a[i]=='1')
        {
            nc++;
        }
        else if(b[i]=='1')
        {
            nb++;
        }
        else
        {
            na++;
        }
    }
    for(i=0;i<=nb;i++)
    {
        for(j=0;j<=nc;j++)
        {
            l=nb+nd-i-j;
            if(l%2==0)
            {
               u=l/2;
               x=n/2;
               vv=x-i-j-u;
               if(u>=0&&u<=nd&&vv>=0&&vv<=na)
               {
                   ans1=vv;
                   ans2=i;
                   ans3=j;
                   ans4=u;
               }
            }
        }
    }
    if(ans1==-1)
    {
        cout<<ans1<<"\n";
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='1'&&b[i]=='1'&&ans4>0)
            {
                v.push_back(i+1);
                ans4--;
            }
            else if(a[i]=='1'&&b[i]=='0'&&ans3>0)
            {
                v.push_back(i+1);
                ans3--;
            }
            else if(b[i]=='1'&&a[i]=='0'&&ans2>0)
            {
                v.push_back(i+1);
                ans2--;
            }
            else if(a[i]=='0'&&b[i]=='0'&&ans1>0)
            {
                v.push_back(i+1);
                ans1--;
            }
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }

}