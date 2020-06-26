#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,l,f,flag;
    string a,b,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a>>b;
        sort(a.begin(),a.end());
        k=a.size();
        l=b.size();
        for(j=0;j<l-k+1;j++)
        {
            for(f=j;f<j+k;f++)
            {
                c+=b[f];
            }
            sort(c.begin(),c.end());
            if(c==a)
            {
               flag=1;
               break;
            }
            c.clear();
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        c.clear();
    }
}