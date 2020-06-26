#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,k,j,sum,flag,cou;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        flag=0;
        cou=0;
        cin>>s;
        k=s.size();
        for(j=0;j<k;j++)
        {
            sum+=(s[j]-48);
            if(s[j]=='0')
            {
                flag=1;
            }
            if((s[j]-48)%2==0)
            {
                cou++;
            }
        }
        if((sum%3)==0&&cou>1&&flag==1)
        {
            cout<<"red\n";
        }
        else
        {
            cout<<"cyan\n";
        }
    }
}