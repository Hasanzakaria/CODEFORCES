#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int a,b;
};
node temp;
vector<node>v;
vector<node>::iterator l;
bool cmp(node x,node y)
{
    return x.a-x.b<y.a-y.b;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,t=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>temp.a>>temp.b;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    reverse(v.begin(),v.end());
    for(l=v.begin();l!=v.end();l++)
    {
        temp=*l;
        sum+=(temp.a*(t-1))+(temp.b*(n-t));
        t++;
    }
    cout<<sum<<"\n";


}