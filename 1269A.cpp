#include<bits/stdc++.h>
using namespace std;
vector<int>v,t;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum,j,k,f;
    cin>>n;
    for(i=2; ;i++)
    {
        sum=n+i;
        for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                f=i/j;
                v.push_back(j);
                if(f!=j)
                {
                    v.push_back(f);
                }
            }
        }
        for(j=1;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
                f=sum/j;
                t.push_back(j);
                if(f!=j)
                {
                    t.push_back(f);
                }
            }
        }
        if(v.size()>2&&t.size()>2)
        {
            break;
        }
        v.clear();
        t.clear();
    }
    cout<<sum<<" "<<i<<"\n";
}