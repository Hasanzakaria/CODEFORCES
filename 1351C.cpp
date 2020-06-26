#include<bits/stdc++.h>
using namespace std;
struct node
{
   long long int a,b,c,d;
};
set<pair<pair<long long int,long long int>,pair<long long int,long long int> > >ss;
set<pair<pair<long long int,long long int>,pair<long long int,long long int> >>::iterator l;
node temp;
int main ()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   long long int t,i,k,j,xin,yin,sum,tempx,tempy;
   string s;
   cin>>t;
   for(i=1;i<=t;i++)
   {
      sum=0;
      cin>>s;
      k=s.size();
      xin=0;
      yin=0;
      for(j=0;j<k;j++)
      {
         tempx=xin;
         tempy=yin;
         if(s[j]=='N')
         {
           yin++;
         }
         else if(s[j]=='S')
         {
            yin--;
         }
         else if(s[j]=='E')
         {
            xin++;
         }
         else
         {
            xin--;
         }
         l=ss.find(make_pair(make_pair(tempx,tempy),make_pair(xin,yin)));
         if(l!=ss.end())
         {
           sum+=1;
         }
         else
         {
           sum+=5;
           ss.insert(make_pair(make_pair(tempx,tempy),make_pair(xin,yin)));
           ss.insert(make_pair(make_pair(xin,yin),make_pair(tempx,tempy)));
         }

      }
      ss.clear();
      cout<<sum<<"\n";

   }
}