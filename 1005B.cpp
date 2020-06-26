#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a,b;
    int k,l,r,i,f,g=-1,t,w;
    cin>>a>>b;
    k=a.size();
    l=b.size();
    r=min(k,l);
    if(r==l)
    {
        f=k-1;
        for(i=l-1; i>=0; i--)
        {
            if(b[i]!=a[f])
            {
                g=i;
                break;
            }
            f--;
        }
        g++;
        t=l-g;
        w=g+(k-t);
    }
    else
    {
        f=l-1;
        for(i=k-1; i>=0; i--)
        {
            if(a[i]!=b[f])
            {
                g=i;
                break;
            }
            f--;
        }
        g++;
        t=k-g;
        w=g+(l-t);
    }
    cout<<w<<endl;

}