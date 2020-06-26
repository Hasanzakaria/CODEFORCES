#include<bits/stdc++.h>
using namespace std;
stack<long long int>s;
long long int cor[2000000],start[2000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    long long int k,i,u,maxx=0,total=1;
    k=a.size();
    for(i=0;i<k;i++)
    {
      if(a[i]=='(')
      {
          s.push(i);
      }
      else
      {
          if(s.size()==0)
          {
              cor[i]=-1;
              start[i]=-1;
          }
          else
          {
              u=s.top();
              s.pop();
              cor[i]=i-u+1;
              start[i]=cor[i];
              if(a[u-1]==')'&&start[u-1]!=-1)
              {
                  start[i]+=start[u-1];
              }
          }
      }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]==')'&&start[i]!=-1)
        {
           if(maxx<start[i])
           {
               maxx=start[i];
               total=1;
           }
           else if(maxx==start[i])
           {
               total++;
           }
        }
    }
    cout<<maxx<<" "<<total<<"\n";

}