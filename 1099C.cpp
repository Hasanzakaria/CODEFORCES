#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a;
    long long int b,k,i,c=0,s=0,l=0,t,r,n,cou=0,p=0;
    cin>>a>>b;
    k=a.size();
    for(i=0; i<k; i++)
    {
        if(a[i]=='?')
        {
            c++;
        }
        else if(a[i]=='*')
        {
            s++;
            p=1;
        }
        else
        {
            l++;
        }
    }
    t=c+s;
    r=l;
    l-=t;
    if(b<l)
    {
        cout<<"Impossible\n";
    }
    else if(b>r)
    {
        if(p==1)
        {
            string ans;
            long long int p;
            n=b-r;
            for(i=0; i<k; i++)
            {
                if(a[i]=='*')
                {
                    p=i;
                    break;
                }
                else if(a[i]!='?'&&a[i]!='*')
                {
                    ans=ans+a[i];
                }
            }
            for(i=1; i<=n; i++)
            {
                ans=ans+a[p-1];
            }
            for(i=p+1; i<k; i++)
            {
                if(a[i]!='?'&&a[i]!='*')
                {
                    ans=ans+a[i];
                }
            }
            cout<<ans<<endl;
        }
        else
        {
          cout<<"Impossible\n";
        }
    }
    else
    {
        n=r-b;
        string ans;
        for(i=0; i<k; i++)
        {
            if(a[i]=='?'&&cou!=n)
            {
                ans.erase(ans.end()-1,ans.end());
                cou++;
            }
            else if(a[i]=='*'&&cou!=n)
            {
                ans.erase(ans.end()-1,ans.end());
                cou++;
            }
            else if(a[i]!='?'&&a[i]!='*')
            {
                ans=ans+a[i];
            }
        }
        cout<<ans<<endl;
    }
}