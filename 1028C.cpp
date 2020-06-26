#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a,b,c,d;
};
multiset<int>x1,x2,z1,z2;
multiset<int>::iterator p,o;
vector<node>v;
node temp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,n,lx,rx,ly,ry;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>temp.a>>temp.b>>temp.c>>temp.d;
        x1.insert(temp.a);
        x2.insert(temp.c);
        z1.insert(temp.b);
        z2.insert(temp.d);
        v.push_back(temp);
    }
    vector<node>::iterator l;
    for(l=v.begin();l!=v.end();l++)
    {
        temp=*l;
        x1.erase(x1.find(temp.a));
        x2.erase(x2.find(temp.c));
        z1.erase(z1.find(temp.b));
        z2.erase(z2.find(temp.d));
        p=x1.end();
        p--;
        o=x2.begin();
        lx=*p;
        rx=*o;
        p=z1.end();
        p--;
        o=z2.begin();
        ly=*p;
        ry=*o;
        if(lx<=rx&&ly<=ry)
        {
           cout<<lx<<" "<<ly<<"\n";
           break;
        }
        x1.insert(temp.a);
        x2.insert(temp.c);
        z1.insert(temp.b);
        z2.insert(temp.d);
    }

}