#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,zero=0,one=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='('&sum%2==0)
        {
            cout<<0;
            sum++;
            zero++;
        }
        else if(a[i]=='('&&sum%2!=0)
        {
            cout<<1;
            sum++;
            one++;
        }
        else
        {
            if(zero>0)
            {
                cout<<0;
                zero--;
            }
            else
            {
                cout<<1;
                one--;
            }
            sum--;
        }
    }



}