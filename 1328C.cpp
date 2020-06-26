#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,flag;
    string s,b,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a;
        cin>>s;
        for(j=0;j<a;j++)
        {
            if(flag==1)
            {
                c+=s[j];
                b+='0';
            }
            else if(s[j]=='2')
            {
                b+='1';
                c+='1';
            }
            else if(s[j]=='0')
            {
                b+='0';
                c+='0';
            }
            else if(s[j]=='1')
            {
                b+='1';
                c+='0';
                flag=1;
            }
        }
        cout<<b<<"\n"<<c<<"\n";
        b.clear();
        c.clear();
    }

}