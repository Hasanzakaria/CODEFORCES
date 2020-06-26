#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>pq;
    int n,i,k,r,cou=0,l=1,flag=0;
    string a;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        cin>>a;
        if(a=="add")
        {
           cin>>k;
           pq.push(k);
           flag=1;
        }
        else
        {
           r=pq.top();
           if(r!=l&&flag)
           {
               cou++;
               flag=0;
               l++;
           }
           else
           {
               pq.pop();
               l++;
           }
        }
    }
    cout<<cou<<endl;


}