#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int x,y;
};
vector<node>v;
node temp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,d,i,pos=0,t=0,flag=0;
    cin>>a>>b>>c>>d;
    for(i=1;i<=a;i++)
    {
        temp.x=(i-1)*c;
        temp.y=((i-1)*c)+d;
        v.push_back(temp);
    }
    while(1)
    {
        pos+=b;
        while(t<a)
        {
            if(pos>v[t].y)
            {
                t++;
                continue;
            }
            if(pos>=v[t].x&&pos<=v[t].y)
            {
                pos+=((v[t].y-pos)/b)*b;
                break;
            }
            else
            {
               flag=1;
               break;
            }
        }
        if(flag==1||t==a)
        {
            break;
        }
    }
    if(flag==1)
    {
        cout<<pos<<"\n";
    }
    else
    {
        while(pos<=v[a-1].y)
        {
            pos+=b;
        }
        cout<<pos<<"\n";
    }

}