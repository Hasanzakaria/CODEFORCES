#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,a,b,i,k,flag,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a>>b;
        k=a-(b-1);
        if(k<=0)
        {
            flag=1;
        }
        else
        {
            if(k%2==0)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            flag=0;
            k=a-(2*(b-1));
            if(k<=0)
            {
                flag=1;
            }
            else
            {
                if(k%2!=0)
                {
                    flag=1;
                }
            }
            if(flag)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
                for(j=1;j<b;j++)
                {
                    cout<<2<<" ";
                }
                cout<<a-(2*(b-1))<<"\n";
            }
        }
        else
        {
            cout<<"YES\n";
            for(j=1;j<b;j++)
            {
                cout<<1<<" ";
            }
            cout<<a-(b-1)<<"\n";
        }
    }

}