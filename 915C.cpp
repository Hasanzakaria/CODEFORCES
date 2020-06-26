#include<bits/stdc++.h>
using namespace std;
vector<string>mp;
vector<string>::iterator lp;
vector<long long int>ew;
vector<long long int>::iterator w;
void permute(string a,long long int l,long long int r)
{
    char ch;
    long long int i;
    if (l == r)
    {
        mp.push_back(a);
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            ch=a[i];
            a[i]=a[l];
            a[l]=ch;
            permute(a, l+1, r);
            ch=a[i];
            a[i]=a[l];
            a[l]=ch;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int k,l,i,f,j,temp,ff=1,q,g,x,maxx=0,qq;
    string a,b,d,e;
    cin>>a>>b;
    e=b;
    k=a.size();
    l=b.size();
    int ara[k],tak[k];
    for(i=0; i<k; i++)
    {
        ara[i]=a[i]-48;
    }
    sort(ara,ara+k);
    reverse(ara,ara+k);
    if(k!=l)
    {
        for(i=0; i<k; i++)
        {
            cout<<ara[i];
        }
        cout<<endl;
    }
    else
    {
        permute(a,0,k-1);
        for(i=1;i<k;i++)
        {
           ff=10*ff;
        }
        q=ff;
        g=0;
        for(i=0;i<k;i++)
        {
            g+=((e[i]-48)*q);
            q/=10;
        }
        qq=g;
        for(lp=mp.begin();lp!=mp.end();lp++)
        {
           q=ff;
           g=0;
           d=*lp;
           for(i=0;i<k;i++)
           {
               g+=((d[i]-48)*q);
               q/=10;
           }
           if(g<=qq)
           {
               ew.push_back(g);
           } 
           
        }
        
        for(w=ew.begin();w!=ew.end();w++)
        {
           x=*w;
           if(x<=g&&x>maxx)
           {
               maxx=x;
           }
        }
        cout<<maxx<<endl;
    }


}