#include<bits/stdc++.h>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   int n,k,i,r,f,m;
   vector<int>v;
   vector<int>::iterator l;
   string a,s;
   cin>>n>>a;
   k=sqrt(n);
   for(i=1;i<=k;i++)
   {
       if(n%i==0)
       {
           v.push_back(i);
           r=n/i;
           if(r!=i)
           {
               v.push_back(r);
           }
       }
   }
   s=a;
   sort(v.begin(),v.end());
   for(l=v.begin();l!=v.end();l++)
   {
     f=*l;
     m=f;
     m--;
     for(i=0;i<f;i++)
     {
         a[i]=s[m];
         m--;
     }
     s=a;
   }
   cout<<s<<endl;


}