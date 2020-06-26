#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,k,flag,j;
    string b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        flag=0;
        k=b.size();
        for(j=0;j<k;j++)
        {
            if(b[j]!='9')
            {
                flag=1;
            }
        }
        if(flag)
        {
            k--;
        }
        cout<<a*k<<"\n";
    }

}