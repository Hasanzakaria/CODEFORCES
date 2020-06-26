#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    long long int t,i,j,flag1,flag2;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag1=0;
        flag2=0;
        cin>>s;
        for(j=0;j<s.size();j++)
        {
            if(s[j]=='0')
            {
                flag1=1;
            }
            else
            {
                flag2=1;
            }
        }
        if(flag1==1&&flag2==1)
        {
            for(j=0;j<2*s.size();j++)
            {
                if(j%2==0)
                {
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
            cout<<"\n";
        }
        else
        {
            cout<<s<<"\n";
        }
    }

}