#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,k,r,l,i,f;
    cin>>a>>b;
    k=(2*b)+1;
    r=a%k;
    if(r==0)
    {
        cout<<a/k<<endl;
        l=0;
        cout<<b+1<<" ";
        for(i=b+2;i<=a;i++)
        {
            if(l==2*b)
            {
                cout<<i<<" ";
                l=-1;
            }
            l++;
        }
    }
    else
    {
        cout<<(a/k)+1<<endl;
        if(r>b)
        {
            cout<<b+1<<" ";
            l=0;
            for(i=b+2;i<=a;i++)
            {
                if(l==2*b)
                {
                    cout<<i<<" ";
                    l=-1;
                }
                l++;
            }
        }
        else
        {
          f=b+1-r;
          cout<<b+1-f<<" ";
          l=0;
          for(i=b+1-f+1;i<=a;i++)
          {
              if(l==2*b)
              {
                  cout<<i<<" ";
                  l=-1;
              }
              l++;
          }
        }
    }
}