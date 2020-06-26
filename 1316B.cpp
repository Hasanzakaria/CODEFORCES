#include<bits/stdc++.h>
using namespace std;
struct node
{
    string p;
    int x;
};
vector<node>v;
node temp;
bool cmp(node &e,node &b)
{
    if(e.p==b.p)
    {
        return e.x<b.x;
    }
    return e.p<b.p;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k;
    cin>>t;
    string s,f;
    for(i=1;i<=t;i++)
    {
        cin>>a>>s;
        temp.p=s;
        temp.x=1;
        v.push_back(temp);
        for(j=1;j<a;j++)
        {
            if(s[j]<=s[0])
            {
                for(k=j;k<a;k++)
                {
                   f+=s[k];
                }
                if(f.size()%2==0)
                {
                    for(k=0;k<j;k++)
                    {
                        f+=s[k];
                    }
                }
                else
                {
                    for(k=j-1;k>=0;k--)
                    {
                        f+=s[k];
                    }
                }
                temp.p=f;
                temp.x=j+1;
                v.push_back(temp);
                f.clear();
            }
        }
        sort(v.begin(),v.end(),cmp);
        temp=v[0];
        cout<<temp.p<<"\n";
        cout<<temp.x<<"\n";
        v.clear();
    }

}