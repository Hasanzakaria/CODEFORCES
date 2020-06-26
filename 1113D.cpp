#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,c,p;
    cin>>a;
    long long int k,i,l,f,u,o;
    k=a.size();
    l=k/2;
    f=l;
    if(k%2!=0)
    {
        l++;
    }
    for(i=l;i<k;i++)
    {
        c=c+a[i];
    }
    for(i=0;i<f;i++)
    {
        p=p+a[i];
    }
    if(p==c)
    {
        if((k%2)!=0)
        {
            cout<<"Impossible\n";
        }
        else
        {
           if((c.size()%2)!=0)
           {
               cout<<"Impossible\n";
           }
           else
           {
              string v,n;
              u=c.size();
              o=u/2;
              for(i=o;i<u;i++)
              {
                  v=v+c[i];
              }
              for(i=0;i<o;i++)
              {
                  n=n+c[i];
              }
              if(v==n)
              {
                  cout<<"Impossible\n";
              }
              else
              {
                  cout<<1<<"\n";
              }

           }
        }
    }
    else
    {
        if(k%2==0)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<2<<"\n";
        }
    }

}