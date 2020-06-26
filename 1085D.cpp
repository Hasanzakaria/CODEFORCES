#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
int main()
{
    long long int n,s,i,x,y,cou=0;
    double x1,x2;
    scanf("%lld %lld",&n,&s);
    for(i=1;i<n;i++)
    {
       scanf("%lld %lld",&x,&y);
       v[x].push_back(y);
       v[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(v[i].size()==1)
        {
            cou++;
        }
    }
    x1=s;
    x2=cou;
    printf("%.8lf",2*(x1/x2));

}