#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long int a,b,c,d,e,k=0,cou=0;
  cin>>a>>b>>c>>d>>e;
  for( ; ; )
  {
     k+=b;
     b+=d;
     if(b>c)
     {
         b=c;
     }
     if(k<a)
     {
        cou++;
     }
     else
     {
         break;
     }
     k=k-e;
  }
  cout<<cou+1<<endl;
}