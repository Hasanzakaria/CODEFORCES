#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k,j,t,r,flag;
    string a;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        flag=0;
        cin>>k;
        cin>>a;
        r=k-1;
        for(j=0; j<=(k/2); j++)
        {
            t=a[j]-a[r];
            r--;
            if(t<0)
            {
                t=-t;
            }
            if(t!=0&&t!=2)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


}