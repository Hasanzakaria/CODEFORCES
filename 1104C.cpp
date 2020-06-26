#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    string a;
    cin>>a;
    long long int k,o=0,p=0,i;
    k=a.size();
    for(i=0;i<k;i++)
    {
       if(a[i]=='0')
       {
          o++;
          if(o==1)
          {
              cout<<1<<" "<<1<<"\n";
          }
          else if(o==2)
          {
              cout<<3<<" "<<1<<"\n";
          }
          if(o==2)
          {
              o=0;
          }
       }
       else
       {
           p++;
           if(p==1)
           {
             cout<<1<<" "<<2<<"\n";
           }
           else if(p==2)
           {
               cout<<2<<" "<<2<<"\n";
           }
           else if(p==3)
           {
               cout<<3<<" "<<2<<"\n";
           }
           else if(p==4)
           {
                cout<<4<<" "<<2<<"\n";
           }
           if(p==4)
           {
               p=0;
           }
       }

    }
}