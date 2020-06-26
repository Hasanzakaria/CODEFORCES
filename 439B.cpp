#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long long int m,n,i,k=0;
    cin>>m>>n;
    long long int ara[m];
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+m);
    for(i=0;i<m;i++)
    {
      k=k+(ara[i]*n);
      n--;
      if(n<1)
      {
          n=1;
      }
    }
    cout<<k;

}