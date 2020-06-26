#include<iostream>
using namespace std;
int main ()
{
    int k,i,temp=0,r,p=0;
    string a;
    cin>>a;
    k=a.size();
    for(i=0;i<k;i++)
    {
       if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
       {
          r=i+1-temp;
          temp=i+1;
          if(r>p)
          {
              p=r;
          }

       }
    }
    r=k-temp+1;
    if(r>p)
    {
        p=r;
    }
    cout<<p;


}