#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=-1;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if(ara[j]%2==0)
            {
                flag=j+1;
            }
        }
        if(flag==-1)
        {
            for(j=0;j<a;j++)
            {
                if(ara[j]%2==1)
                {
                    v.push_back(j+1);
                }
            }
            if(v.size()>=2)
            {
                cout<<2<<"\n";
                cout<<v[0]<<" "<<v[1]<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
        else
        {
            cout<<1<<"\n";
            cout<<flag<<"\n";
        }
        v.clear();
    }

}