#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,j,l,flag;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a;
        sort(a.begin(),a.end());
        k=a[0];
        l=a.size();
        k++;
        for(j=1;j<l;j++)
        {
            if(a[j]!=k)
            {
                flag=1;
                break;
            }
            k++;
        }
        if(flag==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

}