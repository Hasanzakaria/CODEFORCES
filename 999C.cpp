#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main ()
{
   ios_base::sync_with_stdio(0);
   int a,b,i,t,j,r;
   string c;
   cin>>a>>b;
   cin>>c;
   for(i=0;i<a;i++)
   {
       t=c[i]-97;
       mp[t]++;
   }
   for(i=0;i<26;i++)
   {
       string d;
       if(mp[i]<=b)
       {
          a=c.size();
          b-=mp[i];
          for(j=0;j<a;j++)
          {
              if((c[j]-97)!=i)
              {
                  d+=c[j];
              }
          }
          c=d;
       }
       else
       {
          r=0;
          a=c.size();
          for(j=0;j<a;j++)
          {
              if((c[j]-97)!=i)
              {
                  d+=c[j];
              }
              else if((c[j]-97)==i&&r>=b)
              {
                  d+=c[j];
              }
              else if((c[j]-97)==i)
              {
                  r++;
              }

          }
          c=d;
          b=0;
          break;
       }
   }
   cout<<c<<endl;

}